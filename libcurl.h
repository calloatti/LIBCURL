#Define CRLF								Chr(0x0d)+Chr(0x0a)
#Define LF									Chr(0x0a)
#Define TRUE								.T.
#Define FALSE								.F.

*!* Windows API

#DEFINE CREATE_ALWAYS						2
#DEFINE FILE_ATTRIBUTE_NORMAL				0x80
#DEFINE FILE_ATTRIBUTE_READONLY				0x1
#DEFINE FILE_ATTRIBUTE_HIDDEN				0x2
#DEFINE FILE_ATTRIBUTE_SYSTEM				0x4
#DEFINE FILE_FLAG_WRITE_THROUGH				0x80000000
#DEFINE FILE_SHARE_DELETE					0x4
#DEFINE FILE_SHARE_READ						0x1
#DEFINE FILE_SHARE_WRITE					0x2
#DEFINE GENERIC_READ						0x80000000
#DEFINE GENERIC_WRITE						0x40000000
#DEFINE OPEN_EXISTING						3
#DEFINE SEEK_SET							0
#DEFINE SEEK_CUR							1
#DEFINE SEEK_END							2

*!* libcurl

#Define CURL_ERROR_SIZE						256	
#Define CURL_FORMADD_DISABLED				7			
#Define CURL_FORMADD_ILLEGAL_ARRAY			6				
#Define CURL_FORMADD_INCOMPLETE				5			
#Define CURL_FORMADD_LAST					8		
#Define CURL_FORMADD_MEMORY					1		
#Define CURL_FORMADD_NULL					3		
#Define CURL_FORMADD_OK						0	
#Define CURL_FORMADD_OPTION_TWICE			2				
#Define CURL_FORMADD_UNKNOWN_OPTION			4				
#Define CURL_GLOBAL_ALL						3	
#Define CURL_GLOBAL_DEFAULT					3		
#Define CURL_GLOBAL_NOTHING					0		
#Define CURL_GLOBAL_SSL						1	
#Define CURL_GLOBAL_WIN32					2		
#Define CURL_HTTP_VERSION_1_0				1			
#Define CURL_HTTP_VERSION_1_1				2			
#Define CURL_HTTP_VERSION_LAST				3			
#Define CURL_HTTP_VERSION_NONE				0			
#Define CURL_IPRESOLVE_V4					1		
#Define CURL_IPRESOLVE_V6					2		
#Define CURL_IPRESOLVE_WHATEVER				0			
#Define CURL_LOCK_ACCESS_LAST				3			
#Define CURL_LOCK_ACCESS_NONE				0			
#Define CURL_LOCK_ACCESS_SHARED				1			
#Define CURL_LOCK_ACCESS_SINGLE				2			
#Define CURL_LOCK_DATA_CONNECT				5			
#Define CURL_LOCK_DATA_COOKIE				2			
#Define CURL_LOCK_DATA_DNS					3		
#Define CURL_LOCK_DATA_LAST					6		
#Define CURL_LOCK_DATA_NONE					0		
#Define CURL_LOCK_DATA_SHARE				1			
#Define CURL_LOCK_DATA_SSL_SESSION			4				
#Define CURL_MAX_WRITE_SIZE					16384		
#Define CURL_NETRC_IGNORED					0		
#Define CURL_NETRC_LAST						3	
#Define CURL_NETRC_OPTIONAL					1		
#Define CURL_NETRC_REQUIRED					2		
#Define CURL_READFUNC_ABORT					0x10000000		
#Define CURL_READFUNC_PAUSE					0x10000001		
#Define CURL_SEND_FAIL_REWIND				65			
#Define CURL_SOCKET_BAD						-1	
#Define CURL_SSLVERSION_DEFAULT				0			
#Define CURL_SSLVERSION_LAST				4			
#Define CURL_SSLVERSION_SSLv2				2			
#Define CURL_SSLVERSION_SSLv3				3			
#Define CURL_SSLVERSION_TLSv1				1			
#Define CURL_TIMECOND_IFMODSINCE			1				
#Define CURL_TIMECOND_IFUNMODSINCE			2				
#Define CURL_TIMECOND_LAST					4		
#Define CURL_TIMECOND_LASTMOD				3			
#Define CURL_TIMECOND_NONE					0		
#Define CURL_VERSION_ASYNCHDNS				0x80			
#Define CURL_VERSION_CONV					0x1000		
#Define CURL_VERSION_DEBUG					0x40		
#Define CURL_VERSION_GSSNEGOTIATE			0x20				
#Define CURL_VERSION_IDN					0x400		
#Define CURL_VERSION_IPV6					0x01		
#Define CURL_VERSION_KERBEROS4				0x02			
#Define CURL_VERSION_LARGEFILE				0x200			
#Define CURL_VERSION_LIBZ					0x08		
#Define CURL_VERSION_NTLM					0x10		
#Define CURL_VERSION_SPNEGO					0x100		
#Define CURL_VERSION_SSL					0x04		
#Define CURL_VERSION_SSPI					0x800		
#Define CURL_WRITEFUNC_PAUSE				0x10000001			
#Define CURLAUTH_ANY						15	
#Define CURLAUTH_ANYSAFE					14		
#Define CURLAUTH_BASIC						1	
#Define CURLAUTH_DIGEST						2	
#Define CURLAUTH_GSSNEGOTIATE				4			
#Define CURLAUTH_NONE						0	
#Define CURLAUTH_NTLM						8	
#Define CURLCLOSEPOLICY_CALLBACK			5				
#Define CURLCLOSEPOLICY_LAST				6			
#Define CURLCLOSEPOLICY_LEAST_RECENTLY_USED	2						
#Define CURLCLOSEPOLICY_LEAST_TRAFFIC		3					
#Define CURLCLOSEPOLICY_NONE				0			
#Define CURLCLOSEPOLICY_OLDEST				1			
#Define CURLCLOSEPOLICY_SLOWEST				4			
#Define CURLE_ABORTED_BY_CALLBACK			42				
#Define CURLE_AGAIN							81
#Define CURLE_ALREADY_COMPLETE				99999			
#Define CURLE_BAD_CALLING_ORDER				44			
#Define CURLE_BAD_CONTENT_ENCODING			61				
#Define CURLE_BAD_DOWNLOAD_RESUME			36				
#Define CURLE_BAD_FUNCTION_ARGUMENT			43				
#Define CURLE_BAD_PASSWORD_ENTERED			46				
#Define CURLE_CONV_FAILED					75		
#Define CURLE_CONV_REQD						76	
#Define CURLE_COULDNT_CONNECT				7			
#Define CURLE_COULDNT_RESOLVE_HOST			6				
#Define CURLE_COULDNT_RESOLVE_PROXY			5				
#Define CURLE_FAILED_INIT					2		
#Define CURLE_FILE_COULDNT_READ_FILE		37					
#Define CURLE_FILESIZE_EXCEEDED				63			
#Define CURLE_FTP_ACCESS_DENIED				9			
#Define CURLE_FTP_BAD_DOWNLOAD_RESUME		36					
#Define CURLE_FTP_CANT_GET_HOST				15			
#Define CURLE_FTP_CANT_RECONNECT			16				
#Define CURLE_FTP_COULDNT_GET_SIZE			32				
#Define CURLE_FTP_COULDNT_RETR_FILE			19				
#Define CURLE_FTP_COULDNT_SET_ASCII			29				
#Define CURLE_FTP_COULDNT_SET_BINARY		17					
#Define CURLE_FTP_COULDNT_STOR_FILE			25				
#Define CURLE_FTP_COULDNT_USE_REST			31				
#Define CURLE_FTP_PARTIAL_FILE				18			
#Define CURLE_FTP_PORT_FAILED				30			
#Define CURLE_FTP_QUOTE_ERROR				21			
#Define CURLE_FTP_SSL_FAILED				64			
#Define CURLE_FTP_USER_PASSWORD_INCORRECT	10						
#Define CURLE_FTP_WEIRD_227_FORMAT			14				
#Define CURLE_FTP_WEIRD_PASS_REPLY			11				
#Define CURLE_FTP_WEIRD_PASV_REPLY			13				
#Define CURLE_FTP_WEIRD_SERVER_REPLY		8					
#Define CURLE_FTP_WEIRD_USER_REPLY			12				
#Define CURLE_FTP_WRITE_ERROR				20			
#Define CURLE_FUNCTION_NOT_FOUND			41				
#Define CURLE_GOT_NOTHING					52		
#Define CURLE_HTTP_NOT_FOUND				22			
#Define CURLE_HTTP_PORT_FAILED				45			
#Define CURLE_HTTP_POST_ERROR				34			
#Define CURLE_HTTP_RANGE_ERROR				33			
#Define CURLE_HTTP_RETURNED_ERROR			22				
#Define CURLE_INTERFACE_FAILED				45			
#Define CURLE_LAST							67
#Define CURLE_LDAP_CANNOT_BIND				38			
#Define CURLE_LDAP_INVALID_URL				62			
#Define CURLE_LDAP_SEARCH_FAILED			39				
#Define CURLE_LIBRARY_NOT_FOUND				40			
#Define CURLE_LOGIN_DENIED					67		
#Define CURLE_MALFORMAT_USER				24			
#Define CURLE_OK							0
#Define CURLE_OPERATION_TIMEDOUT			28				
#Define CURLE_OPERATION_TIMEOUTED			28				
#Define CURLE_OUT_OF_MEMORY					27		
#Define CURLE_PARTIAL_FILE					18		
#Define CURLE_PEER_FAILED_VERIFICATION		51					
#Define CURLE_QUOTE_ERROR					21		
#Define CURLE_RANGE_ERROR					33		
#Define CURLE_READ_ERROR					26		
#Define CURLE_RECV_ERROR					56		
#Define CURLE_REMOTE_ACCESS_DENIED			9				
#Define CURLE_REMOTE_DISK_FULL				70			
#Define CURLE_REMOTE_FILE_EXISTS			73				
#Define CURLE_REMOTE_FILE_NOT_FOUND			78				
#Define CURLE_SEND_ERROR					55		
#Define CURLE_SEND_FAIL_REWIND				65			
#Define CURLE_SHARE_IN_USE					57		
#Define CURLE_SSH							79
#Define CURLE_SSL_CACERT					60		
#Define CURLE_SSL_CACERT_BADFILE			77				
#Define CURLE_SSL_CERTPROBLEM				58			
#Define CURLE_SSL_CIPHER					59		
#Define CURLE_SSL_CONNECT_ERROR				35			
#Define CURLE_SSL_CRL_BADFILE				82			
#Define CURLE_SSL_ENGINE_INITFAILED			66				
#Define CURLE_SSL_ENGINE_NOTFOUND			53				
#Define CURLE_SSL_ENGINE_SETFAILED			54				
#Define CURLE_SSL_ISSUER_ERROR				83			
#Define CURLE_SSL_PEER_CERTIFICATE			51				
#Define CURLE_SSL_SHUTDOWN_FAILED			80				
#Define CURLE_TELNET_OPTION_SYNTAX			49				
#Define CURLE_TFTP_DISKFULL					70		
#Define CURLE_TFTP_EXISTS					73		
#Define CURLE_TFTP_ILLEGAL					71		
#Define CURLE_TFTP_NOSUCHUSER				74			
#Define CURLE_TFTP_NOTFOUND					68		
#Define CURLE_TFTP_PERM						69	
#Define CURLE_TFTP_UNKNOWNID				72			
#Define CURLE_TOO_MANY_REDIRECTS			47				
#Define CURLE_UNKNOWN_TELNET_OPTION			48				
#Define CURLE_UNSUPPORTED_PROTOCOL			1				
#Define CURLE_UPLOAD_FAILED					25		
#Define CURLE_URL_MALFORMAT					3		
#Define CURLE_URL_MALFORMAT_USER			4				
#Define CURLE_USE_SSL_FAILED				64			
#Define CURLE_WRITE_ERROR					23		
#Define CURLFORM_ARRAY						8	
#Define CURLFORM_BUFFER						11	
#Define CURLFORM_BUFFERLENGTH				13			
#Define CURLFORM_BUFFERPTR					12		
#Define CURLFORM_CONTENTHEADER				15			
#Define CURLFORM_CONTENTSLENGTH				6			
#Define CURLFORM_CONTENTTYPE				14			
#Define CURLFORM_COPYCONTENTS				4			
#Define CURLFORM_COPYNAME					1		
#Define CURLFORM_END						17	
#Define CURLFORM_FILE						10	
#Define CURLFORM_FILECONTENT				7			
#Define CURLFORM_FILENAME					16		
#Define CURLFORM_NAMELENGTH					3		
#Define CURLFORM_NOTHING					0		
#Define CURLFORM_OBSOLETE					9		
#Define CURLFORM_OBSOLETE2					18		
#Define CURLFORM_PTRCONTENTS				5			
#Define CURLFORM_PTRNAME					2		
#Define CURLFORM_STREAM						19	
#Define CURLFTPAUTH_DEFAULT					0		
#Define CURLFTPAUTH_LAST					3		
#Define CURLFTPAUTH_SSL						1	
#Define CURLFTPAUTH_TLS						2	
#Define CURLFTPMETHOD_DEFAULT				0			
#Define CURLFTPMETHOD_LAST					4		
#Define CURLFTPMETHOD_MULTICWD				1			
#Define CURLFTPMETHOD_NOCWD					2		
#Define CURLFTPMETHOD_SINGLECWD				3			
#Define CURLFTPSSL_ALL						3	
#Define CURLFTPSSL_CCC_ACTIVE				2			
#Define CURLFTPSSL_CCC_LAST					3		
#Define CURLFTPSSL_CCC_NONE					0		
#Define CURLFTPSSL_CCC_PASSIVE				1			
#Define CURLFTPSSL_CONTROL					2		
#Define CURLFTPSSL_LAST						4	
#Define CURLFTPSSL_NONE						0	
#Define CURLFTPSSL_TRY						1	
#Define CURLINFO_APPCONNECT_TIME			0x300021				
#Define CURLINFO_CONNECT_TIME				0x300005			
#Define CURLINFO_CONTENT_LENGTH_DOWNLOAD	0x30000F						
#Define CURLINFO_CONTENT_LENGTH_UPLOAD		0x300010					
#Define CURLINFO_CONTENT_TYPE				0x100012			
#Define CURLINFO_COOKIELIST					0x30001c		
#Define CURLINFO_DATA_IN					3		
#Define CURLINFO_DATA_OUT					4		
#Define CURLINFO_DOUBLE						0x300000	
#Define CURLINFO_EFFECTIVE_URL				0x100001			
#Define CURLINFO_END						7	
#Define CURLINFO_FILETIME					0x20000E		
#Define CURLINFO_FTP_ENTRY_PATH				0x30001e			
#Define CURLINFO_HEADER_IN					1		
#Define CURLINFO_HEADER_OUT					2		
#Define CURLINFO_HEADER_SIZE				0x20000B			
#Define CURLINFO_HTTP_CODE					0x200002		
#Define CURLINFO_HTTP_CONNECTCODE			0x200016				
#Define CURLINFO_HTTPAUTH_AVAIL				0x200017			
#Define CURLINFO_LASTONE					0x1C		
#Define CURLINFO_LASTSOCKET					0x30001d		
#Define CURLINFO_LONG						0x200000	
#Define CURLINFO_MASK						0x0fffff	
#Define CURLINFO_NAMELOOKUP_TIME			0x300004				
#Define CURLINFO_NONE						0	
#Define CURLINFO_NUM_CONNECTS				0x20001A			
#Define CURLINFO_OS_ERRNO					0x200019		
#Define CURLINFO_PRETRANSFER_TIME			0x300006				
#Define CURLINFO_PRIMARY_IP					0x300020		
#Define CURLINFO_PRIVATE					0x100015		
#Define CURLINFO_PROXYAUTH_AVAIL			0x200018				
#Define CURLINFO_REDIRECT_COUNT				0x200014			
#Define CURLINFO_REDIRECT_TIME				0x300013			
#Define CURLINFO_REDIRECT_URL				0x30001f			
#Define CURLINFO_REQUEST_SIZE				0x20000C			
#Define CURLINFO_RESPONSE_CODE				0x200002			
#Define CURLINFO_SIZE_DOWNLOAD				0x300008			
#Define CURLINFO_SIZE_UPLOAD				0x300007			
#Define CURLINFO_SLIST						0x400000	
#Define CURLINFO_SPEED_DOWNLOAD				0x300009			
#Define CURLINFO_SPEED_UPLOAD				0x30000A			
#Define CURLINFO_SSL_DATA_IN				5			
#Define CURLINFO_SSL_DATA_OUT				6			
#Define CURLINFO_SSL_ENGINES				0x40001B			
#Define CURLINFO_SSL_VERIFYRESULT			0x20000D				
#Define CURLINFO_STARTTRANSFER_TIME			0x300011				
#Define CURLINFO_STRING						0x100000	
#Define CURLINFO_TEXT						0x000000	
#Define CURLINFO_TOTAL_TIME					0x300003		
#Define CURLINFO_TYPEMASK					0xf00000		
#Define CURLIOCMD_LAST						2	
#Define CURLIOCMD_NOP						0	
#Define CURLIOCMD_RESTARTREAD				1			
#Define CURLIOE_FAILRESTART					2		
#Define CURLIOE_LAST						3	
#Define CURLIOE_OK							0
#Define CURLIOE_UNKNOWNCMD					1		
#Define CURLM_BAD_EASY_HANDLE				2			
#Define CURLM_BAD_HANDLE					1		
#Define CURLM_BAD_SOCKET					5		
#Define CURLM_CALL_MULTI_PERFORM			-1				
#Define CURLM_CALL_MULTI_SOCKET				-1			
#Define CURLM_INTERNAL_ERROR				4			
#Define CURLM_LAST							5
#Define CURLM_OK							0
#Define CURLM_OUT_OF_MEMORY					3		
#Define CURLM_UNKNOWN_OPTION				6			
#Define CURLMOPT_MAXCONNECTS				00006			
#Define CURLMOPT_PIPELINING					00003		
#Define CURLMOPT_SOCKETDATA					10002		
#Define CURLMOPT_SOCKETFUNCTION				20001			
#Define CURLMOPT_TIMERDATA					10005		
#Define CURLMOPT_TIMERFUNCTION				20004			
#Define CURLMSG_DONE						1	
#Define CURLMSG_LAST						2	
#Define CURLMSG_NONE						0	
#Define CURLOPT_ADDRESS_SCOPE				00171			
#Define CURLOPT_APPEND						00050	
#Define CURLOPT_AUTOREFERER					00058		
#Define CURLOPT_BUFFERSIZE					00098		
#Define CURLOPT_CAINFO						10065	
#Define CURLOPT_CAPATH						10097	
#Define CURLOPT_CLOSEPOLICY					00072		
#Define CURLOPT_CONNECT_ONLY				00141			
#Define CURLOPT_CONNECTTIMEOUT				00078			
#Define CURLOPT_CONNECTTIMEOUT_MS			00156				
#Define CURLOPT_CONV_FROM_NETWORK_FUNCTION	20142						
#Define CURLOPT_CONV_FROM_UTF8_FUNCTION		20144					
#Define CURLOPT_CONV_TO_NETWORK_FUNCTION	20143						
#Define CURLOPT_COOKIE						10022	
#Define CURLOPT_COOKIEFILE					10031		
#Define CURLOPT_COOKIEJAR					10082		
#Define CURLOPT_COOKIELIST					10135		
#Define CURLOPT_COOKIESESSION				00096			
#Define CURLOPT_COPYPOSTFIELDS				10165			
#Define CURLOPT_CRLF						00027	
#Define CURLOPT_CRLFILE						10169	
#Define CURLOPT_CUSTOMREQUEST				10036			
#Define CURLOPT_DEBUGDATA					10095		
#Define CURLOPT_DEBUGFUNCTION				20094			
#Define CURLOPT_DIRLISTONLY					00048		
#Define CURLOPT_DNS_CACHE_TIMEOUT			00092				
#Define CURLOPT_DNS_USE_GLOBAL_CACHE		00091					
#Define CURLOPT_EDGSOCKET					10077		
#Define CURLOPT_ENCODING					10102		
#Define CURLOPT_ERRORBUFFER					10010		
#Define CURLOPT_FAILONERROR					00045		
#Define CURLOPT_FILE						10001	
#Define CURLOPT_FILETIME					00069		
#Define CURLOPT_FOLLOWLOCATION				00052			
#Define CURLOPT_FORBID_REUSE				00075			
#Define CURLOPT_FRESH_CONNECT				00074			
#Define CURLOPT_FTP_ACCOUNT					10134		
#Define CURLOPT_FTP_ALTERNATIVE_TO_USER		10147					
#Define CURLOPT_FTP_CREATE_MISSING_DIRS		00110					
#Define CURLOPT_FTP_FILEMETHOD				00138			
#Define CURLOPT_FTP_RESPONSE_TIMEOUT		00112					
#Define CURLOPT_FTP_SKIP_PASV_IP			00137				
#Define CURLOPT_FTP_SSL						00119	
#Define CURLOPT_FTP_SSL_CCC					00154		
#Define CURLOPT_FTP_USE_EPRT				00106			
#Define CURLOPT_FTP_USE_EPSV				00085			
#Define CURLOPT_FTPACCOUNT					10134		
#Define CURLOPT_FTPAPPEND					00050		
#Define CURLOPT_FTPLISTONLY					00048		
#Define CURLOPT_FTPPORT						10017	
#Define CURLOPT_FTPSSLAUTH					00129		
#Define CURLOPT_HEADER						00042	
#Define CURLOPT_HEADERDATA					10029		
#Define CURLOPT_HEADERFUNCTION				20079			
#Define CURLOPT_HTTP_CONTENT_DECODING		00158					
#Define CURLOPT_HTTP_TRANSFER_DECODING		00157					
#Define CURLOPT_HTTP_VERSION				00084			
#Define CURLOPT_HTTP200ALIASES				10104			
#Define CURLOPT_HTTPAUTH					00107		
#Define CURLOPT_HTTPGET						00080	
#Define CURLOPT_HTTPHEADER					10023		
#Define CURLOPT_HTTPPOST					10024		
#Define CURLOPT_HTTPPROXYTUNNEL				00061			
#Define CURLOPT_IGNORE_CONTENT_LENGTH		00136					
#Define CURLOPT_INFILE						10009	
#Define CURLOPT_INFILESIZE					00014		
#Define CURLOPT_INFILESIZE_LARGE			30115				
#Define CURLOPT_INTERFACE					10062		
#Define CURLOPT_IOCTLDATA					10131		
#Define CURLOPT_IOCTLFUNCTION				20130			
#Define CURLOPT_IPRESOLVE					00113		
#Define CURLOPT_ISSUERCERT					10170		
#Define CURLOPT_KEYPASSWD					10026		
#Define CURLOPT_KRB4LEVEL					10063		
#Define CURLOPT_LASTENTRY					00135		
#Define CURLOPT_LOCALPORT					00139		
#Define CURLOPT_LOCALPORTRANGE				00140			
#Define CURLOPT_LOW_SPEED_LIMIT				00019			
#Define CURLOPT_LOW_SPEED_TIME				00020			
#Define CURLOPT_MAX_RECV_SPEED_LARGE		30146					
#Define CURLOPT_MAX_SEND_SPEED_LARGE		30145					
#Define CURLOPT_MAXCONNECTS					00071		
#Define CURLOPT_MAXFILESIZE					00114		
#Define CURLOPT_MAXFILESIZE_LARGE			30117				
#Define CURLOPT_MAXREDIRS					00068		
#Define CURLOPT_NETRC						00051	
#Define CURLOPT_NETRC_FILE					10118		
#Define CURLOPT_NEW_DIRECTORY_PERMS			00160				
#Define CURLOPT_NEW_FILE_PERMS				00159			
#Define CURLOPT_NOBODY						00044	
#Define CURLOPT_NOPROGRESS					00043		
#Define CURLOPT_NOSIGNAL					00099		
#Define CURLOPT_OPENSOCKETDATA				10164			
#Define CURLOPT_OPENSOCKETFUNCTION			20163				
#Define CURLOPT_PASV_HOST					00126		
#Define CURLOPT_PORT						00003	
#Define CURLOPT_POST						00047	
#Define CURLOPT_POST301						00161	
#Define CURLOPT_POSTFIELDS					10015		
#Define CURLOPT_POSTFIELDSIZE				00060			
#Define CURLOPT_POSTFIELDSIZE_LARGE			30120				
#Define CURLOPT_POSTQUOTE					10039		
#Define CURLOPT_PREQUOTE					10093		
#Define CURLOPT_PRIVATE						10103	
#Define CURLOPT_PROGRESSDATA				10057			
#Define CURLOPT_PROGRESSFUNCTION			20056				
#Define CURLOPT_PROXY						10004	
#Define CURLOPT_PROXY_TRANSFER_MODE			00166				
#Define CURLOPT_PROXYAUTH					00111		
#Define CURLOPT_PROXYPORT					00059		
#Define CURLOPT_PROXYTYPE					00101		
#Define CURLOPT_PROXYUSERPWD				10006			
#Define CURLOPT_PUT							00054
#Define CURLOPT_QUOTE						10028	
#Define CURLOPT_RANDOM_FILE					10076		
#Define CURLOPT_RANGE						10007	
#Define CURLOPT_READDATA					10009		
#Define CURLOPT_READFUNCTION				20012			
#Define CURLOPT_REFERER						10016	
#Define CURLOPT_RESUME_FROM					00021		
#Define CURLOPT_RESUME_FROM_LARGE			30116				
#Define CURLOPT_SEEKDATA					10168		
#Define CURLOPT_SEEKFUNCTION				20167			
#Define CURLOPT_SHARE						10100	
#Define CURLOPT_SOCKOPTDATA					10149		
#Define CURLOPT_SOCKOPTFUNCTION				20148			
#Define CURLOPT_SOURCE_HOST					10122		
#Define CURLOPT_SOURCE_PATH					10124		
#Define CURLOPT_SOURCE_PORT					00125		
#Define CURLOPT_SOURCE_POSTQUOTE			10128				
#Define CURLOPT_SOURCE_PREQUOTE				10127			
#Define CURLOPT_SOURCE_QUOTE				10133			
#Define CURLOPT_SOURCE_URL					10132		
#Define CURLOPT_SOURCE_USERPWD				10123			
#Define CURLOPT_SSH_AUTH_TYPES				00151			
#Define CURLOPT_SSH_HOST_PUBLIC_KEY_MD5		10162					
#Define CURLOPT_SSH_PRIVATE_KEYFILE			10153				
#Define CURLOPT_SSH_PUBLIC_KEYFILE			10152				
#Define CURLOPT_SSL_CIPHER_LIST				10083			
#Define CURLOPT_SSL_CTX_DATA				10109			
#Define CURLOPT_SSL_CTX_FUNCTION			20108				
#Define CURLOPT_SSL_SESSIONID_CACHE			00150				
#Define CURLOPT_SSL_VERIFYHOST				00081			
#Define CURLOPT_SSL_VERIFYPEER				00064			
#Define CURLOPT_SSLCERT						10025	
#Define CURLOPT_SSLCERTPASSWD				10026			
#Define CURLOPT_SSLCERTTYPE					10086		
#Define CURLOPT_SSLENGINE					10089		
#Define CURLOPT_SSLENGINE_DEFAULT			00090				
#Define CURLOPT_SSLKEY						10087	
#Define CURLOPT_SSLKEYPASSWD				10026			
#Define CURLOPT_SSLKEYTYPE					10088		
#Define CURLOPT_SSLVERSION					00032		
#Define CURLOPT_STDERR						10037	
#Define CURLOPT_TCP_NODELAY					00121		
#Define CURLOPT_TELNETOPTIONS				10070			
#Define CURLOPT_TIMECONDITION				00033			
#Define CURLOPT_TIMEOUT						00013	
#Define CURLOPT_TIMEOUT_MS					00155		
#Define CURLOPT_TIMEVALUE					00034		
#Define CURLOPT_TRANSFERTEXT				00053			
#Define CURLOPT_UNRESTRICTED_AUTH			00105				
#Define CURLOPT_UPLOAD						00046	
#Define CURLOPT_URL							10002
#Define CURLOPT_USE_SSL						00119	
#Define CURLOPT_USERAGENT					10018		
#Define CURLOPT_USERPWD						10005	
#Define CURLOPT_VERBOSE						00041	
#Define CURLOPT_WRITEDATA					10001		
#Define CURLOPT_WRITEFUNCTION				20011			
#Define CURLOPT_WRITEHEADER					10029		
#Define CURLOPT_WRITEINFO					10040		
#Define CURLOPTTYPE_FUNCTIONPOINT			20000				
#Define CURLOPTTYPE_LONG					00000		
#Define CURLOPTTYPE_OBJECTPOINT				10000			
#Define CURLOPTTYPE_OFF_T					30000		
#Define CURLPAUSE_ALL						5	
#Define CURLPAUSE_CONT						0	
#Define CURLPAUSE_RECV						1	
#Define CURLPAUSE_RECV_CONT					0		
#Define CURLPAUSE_SEND						4	
#Define CURLPAUSE_SEND_CONT					0		
#Define CURLPROXY_HTTP						0	
#Define CURLPROXY_SOCKS4					4		
#Define CURLPROXY_SOCKS4A					6		
#Define CURLPROXY_SOCKS5					5		
#Define CURLPROXY_SOCKS5_HOSTNAME			7				
#Define CURLSHE_BAD_OPTION					1		
#Define CURLSHE_IN_USE						2	
#Define CURLSHE_INVALID						3	
#Define CURLSHE_LAST						5	
#Define CURLSHE_NOMEM						4	
#Define CURLSHE_OK							0
#Define CURLSHOPT_LAST						6	
#Define CURLSHOPT_LOCKFUNC					3		
#Define CURLSHOPT_NONE						0	
#Define CURLSHOPT_SHARE						1	
#Define CURLSHOPT_UNLOCKFUNC				4			
#Define CURLSHOPT_UNSHARE					2		
#Define CURLSHOPT_USERDATA					5		
#Define CURLSOCKTYPE_IPCXN					0		
#Define CURLSOCKTYPE_LAST					1		
#Define CURLSSH_AUTH_ANY					-1		
#Define CURLSSH_AUTH_DEFAULT				-1			
#Define CURLSSH_AUTH_HOST					4		
#Define CURLSSH_AUTH_KEYBOARD				8			
#Define CURLSSH_AUTH_NONE					0		
#Define CURLSSH_AUTH_PASSWORD				2			
#Define CURLSSH_AUTH_PUBLICKEY				1			
#Define CURLUSESSL_ALL						3	
#Define CURLUSESSL_CONTROL					2		
#Define CURLUSESSL_LAST						4	
#Define CURLUSESSL_NONE						0	
#Define CURLUSESSL_TRY						1	
#Define CURLVERSION_FIRST					0		
#Define CURLVERSION_FOURTH					3		
#Define CURLVERSION_NOW						2	
#Define CURLVERSION_SECOND					1		
#Define CURLVERSION_THIRD					2		
#Define HTTPPOST_BUFFER						0x10	
#Define HTTPPOST_CALLBACK					0x40		
#Define HTTPPOST_FILENAME					0x1		
#Define HTTPPOST_PTRBUFFER					0x20		
#Define HTTPPOST_PTRCONTENTS				0x8			
#Define HTTPPOST_PTRNAME					0x4		
#Define HTTPPOST_READFILE					0x2		
