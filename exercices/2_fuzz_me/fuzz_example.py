#!/usr/bin/python

from boofuzz import *

host = '127.0.0.1'	
port = 9999		

def main():
	
	session = Session(target = Target(connection = SocketConnection(host, port, proto='tcp')))
	
	s_initialize("PRGM")	#just giving our session a name, "PRGM"

    	s_string("KEYWORD", fuzzable = False)	#these strings are fuzzable by default, so here instead of blank, we specify 'false'
    	s_delim(" ", fuzzable = False)		#we don't want to fuzz the space between "KEYWORD" and our arg
   	s_string("FUZZ")			#This value is arbitrary as we did not specify 'False' for fuzzable. Boofuzz will fuzz this string now.
 
        
if __name__ == "__main__":
    main()
