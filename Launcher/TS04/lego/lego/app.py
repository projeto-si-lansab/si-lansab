from lego import Lego
from server import Server
import logging
import thread

class App:
    def __init__(self):
        logging.basicConfig(filename='lego.log',
                            level=logging.DEBUG,
                            format='%(asctime)s %(message)s',
                            datefmt='%d/%m/%Y %H:%M:%S')
        
    def main_loop(self):
        exit_app = False
        srv = Server()
        while not exit_app:
            self.lego = None
            srv.accept()
            while True:
                data = srv.recv()
                logging.info(data)
                if not data:
                    del self.lego
                    break
                elif data == 'start':
                    if not self.lego:
                        self.lego = Lego()
                    if self.lego.idle:
                        thread.start_new_thread(self.start_lego, ())
                elif self.lego and data == 'stop':
                    self.lego.stop()
                elif self.lego and data == 'reset':
                    self.lego.reset()
                elif data == 'exit':
                    exit_app = True
                    del self.lego
                    break
        srv.close()
    
    def start_lego(self):
        self.lego.start()
