from client import Client
from server import ServerThread

class App:
    def main_loop(self):
        client = Client()
        t = ServerThread(client)
        t.start()
        while True:
            data = raw_input('>>> ')
            if data == 'exit':
                break
            else:
                if data == 'exit lego':
                    data = 'exit'
                client.send(data)
        client.close()
        t.exit_server = True
        t.join()