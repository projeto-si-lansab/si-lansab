import socket
import threading
import config

class Server:
    def __init__(self):
        self.socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.socket.bind((config.UDP_HOST, config.UDP_PORT))
        self.socket.settimeout(1.0)
    
    def close(self):
        self.socket.close()
    
    def recvfrom(self):
        try:
            return self.socket.recvfrom(1024)
        except:
            return None


class ServerThread(threading.Thread):
    def __init__(self, client):
        threading.Thread.__init__(self)
        self.client = client
        self.exit_server = False
    
    def run(self):
        server = Server()
        while not self.exit_server:
            data = server.recvfrom()
            if not self.exit_server and data:
                self.client.send(data[0])
        server.close()