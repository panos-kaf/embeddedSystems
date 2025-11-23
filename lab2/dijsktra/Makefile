SLL:
	gcc dijkstra.c -DSLL -o dijkstra -pthread -lcdsl -no-pie -L ../synch_implementations -I ../synch_implementations

DLL:
	gcc dijkstra.c -DDLL -o dijkstra -pthread -lcdsl -no-pie -L ../synch_implementations -I ../synch_implementations

DYN_ARR:	
	gcc dijkstra.c -DDYN_ARR -o dijkstra -pthread -lcdsl -no-pie -L ../synch_implementations -I ../synch_implementations

clean:
	rm dijkstra
