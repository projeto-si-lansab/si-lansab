import config

class Server():
    def __init__(self):
        self.socket = config.Socket().get_socket()
        self.socket.bind((config.HOST, config.PORT))
        self.socket.listen(1)
    
    def accept(self):
        self.client, self.addr = self.socket.accept()
    
    def close(self):
        self.socket.close()
    
    def recv(self):
        try:
            return self.client.recv(1024)
        except:
            return None