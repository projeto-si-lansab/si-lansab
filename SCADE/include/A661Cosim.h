#ifndef _A661_COSIM_H_
#define _A661_COSIM_H_

extern int A661SetServerPath(const char* pszPath);
extern int A661SetLogFile(const char* pszPath);
extern int A661ConnectServer(const char* pszHostName, unsigned short nPort, const char* pszDf, const char* pszConf);
extern int A661Receive(unsigned char* buf, int buf_size);
extern int A661Send(unsigned char* msg, int msg_len);

#define OK			0
#define NOTCONNECTED_ERROR	1
#define CONNECT_ERROR		2
#define	RECEIVE_ERROR		3
#define	SEND_ERROR		4
#define	OTHER_ERROR		5

#endif /* _A661_COSIM_H_ */
