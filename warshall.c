#include<stdlib.h>
#include<igraph/igraph.h>

int main()

{
   igraph_t graph;
   FILE *instream;
   igraph_real_t diameter=0;
   igraph_bool_t res=1;

    instream=fopen("/home/cyborg/test3-2-3.txt","r");
	igraph_read_graph_edgelist(&graph,instream,6, 0);
   //igraph_diameter_dijkstra(&graph,NULL,&diameter,NULL,NULL,NULL,0,1);
    //igraph_diameter(&graph, &diameter, 0, 0, 0, IGRAPH_UNDIRECTED, 0);
    igraph_is_connected(&graph,&res,IGRAPH_WEAK);
   
   //igraph_shortest_paths(&graph, &res,0,1,IGRAPH_ALL);

    printf("Es conexa? : %d\n",res);
    
    
    igraph_destroy(&graph);
	fcloseall();
	return 0;
	}





