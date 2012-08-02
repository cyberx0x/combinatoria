#include<stdlib.h>
#include<igraph/igraph.h>

int main()

{
   igraph_t graph;
   FILE *instream;
   igraph_real_t diameter;
    instream=fopen("/home/cyborg/test3-2-6.txt","r");
	igraph_read_graph_edgelist(&graph,instream, 292864, 0);
    igraph_diameter(&graph, &diameter, 0, 0, 0, IGRAPH_UNDIRECTED, 1);
    printf("Diameter : %f\n",(double) diameter);
    igraph_destroy(&graph);

	return 0;
	}





