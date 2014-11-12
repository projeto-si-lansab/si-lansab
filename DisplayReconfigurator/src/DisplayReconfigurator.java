import java.nio.file.Path;
import java.nio.file.Paths;

import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import javax.xml.xpath.XPath;
import javax.xml.xpath.XPathConstants;
import javax.xml.xpath.XPathFactory;

import org.w3c.dom.Document;
import org.w3c.dom.NodeList;


public class DisplayReconfigurator {

	public static void main(String[] args) throws Exception {
		if (args.length != 9) {
			System.out.println("usage: java -jar DisplayConfiguration.jar <input_file> <output_file> <new_application_id> <new_width> <new_height> <offset_x> <offset_y> <horizontal_ratio> <vertical_ratio>");
			System.exit(1);
		}
		String inputFile = args[0];
		String outputFile = args[1];
		Integer applicationID = Integer.parseInt(args[2]);
		Integer newWidth = Integer.parseInt(args[3]);
		Integer newHeight = Integer.parseInt(args[4]);
		Integer offsetX = Integer.parseInt(args[5]);
		Integer offsetY = Integer.parseInt(args[6]);
		Integer horizontalRatio = Integer.parseInt(args[7]);
		Integer verticalRatio = Integer.parseInt(args[8]);
		
		
		Path inputPath = Paths.get(inputFile).toAbsolutePath();
		Document doc = DocumentBuilderFactory.newInstance().newDocumentBuilder().parse(inputPath.toFile());
		
		if (applicationID != null && applicationID > 0) {
			XPath xpath = XPathFactory.newInstance().newXPath();
			NodeList nodes = (NodeList)xpath.evaluate("/specification/A661/intprop[@name='ApplicationId']", doc, XPathConstants.NODESET);
			nodes.item(0).setTextContent(applicationID.toString());
		}

		if (horizontalRatio == null || horizontalRatio < 0)
			horizontalRatio = 20;
		if (verticalRatio == null || verticalRatio < 0)
			verticalRatio = 20;

		if (newWidth != null && newWidth > 0) {
			XPath xpath = XPathFactory.newInstance().newXPath();
			NodeList nodes = (NodeList)xpath.evaluate("/specification/symbology/dimension/@width", doc, XPathConstants.NODESET);
			nodes.item(0).setTextContent(newWidth.toString());
		}

		if (newHeight != null && newWidth > 0) {
			XPath xpath = XPathFactory.newInstance().newXPath();
			NodeList nodes = (NodeList)xpath.evaluate("/specification/symbology/dimension/@height", doc, XPathConstants.NODESET);
			nodes.item(0).setTextContent(newHeight.toString());
		}

		if (newWidth != null && newWidth > 0) {
			XPath xpath = XPathFactory.newInstance().newXPath();
			NodeList nodes = (NodeList)xpath.evaluate("/specification/children/A661Layer/model/intprop[@name='Width']", doc, XPathConstants.NODESET);
			Integer virtualWidth = newWidth * horizontalRatio;
			nodes.item(0).setTextContent(virtualWidth.toString());
		}

		if (newHeight != null && newHeight > 0) {
			XPath xpath = XPathFactory.newInstance().newXPath();
			NodeList nodes = (NodeList)xpath.evaluate("/specification/children/A661Layer/model/intprop[@name='Height']", doc, XPathConstants.NODESET);
			Integer virtualHeight = newHeight * verticalRatio;
			nodes.item(0).setTextContent(virtualHeight.toString());
		}

		if (offsetX != null) {
			XPath xpath = XPathFactory.newInstance().newXPath();
			NodeList nodes = (NodeList)xpath.evaluate("/specification/children/A661Layer/children/*/model/intprop[@name='PosX']", doc, XPathConstants.NODESET);
			for (int i = 0; i < nodes.getLength(); i++) {
				Integer oldPosX = Integer.parseInt(nodes.item(i).getTextContent());
				Integer newPosX = oldPosX + offsetX * horizontalRatio;
				nodes.item(i).setTextContent(newPosX.toString());
			}
		}

		if (offsetY != null) {
			XPath xpath = XPathFactory.newInstance().newXPath();
			NodeList nodes = (NodeList)xpath.evaluate("/specification/children/A661Layer/children/*/model/intprop[@name='PosY']", doc, XPathConstants.NODESET);
			for (int i = 0; i < nodes.getLength(); i++) {
				Integer oldPosY = Integer.parseInt(nodes.item(i).getTextContent());
				Integer newPosY = oldPosY + offsetY * verticalRatio;
				nodes.item(i).setTextContent(newPosY.toString());
			}
		}

		Path outputPath = Paths.get(outputFile).toAbsolutePath();
		Transformer xformer = TransformerFactory.newInstance().newTransformer();
		xformer.transform(new DOMSource(doc),new StreamResult(outputPath.toFile()));
	}

}
