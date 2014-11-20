from client import Client

class App:
    def main_loop(self):
        client = Client()
        while True:
            data = raw_input('>>> ')
            if data == 'exit':
                break
            else:
                if data == 'exit lego':
                    data = 'exit'
                client.send(data)
        client.close()
