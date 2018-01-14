#include "stdio.h"    
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXVEX 100 
#define  INFINITY 65535

typedef int Stataus;
typedef char VertexType;
typedef int EdgeType;
typedef struct 
{
	VertexType vexs[MAXVEX];
	EdgeType arc[MAXVEX][MAXVEX];
	int numNodes, numEdges;
}MGraph;

void CreateMGraph(MGraph *G)
{
	int i, j, k,w;
	printf("输入顶点数和边数:\n");
	scanf("%d,%d", &G->numNodes, &G->numEdges);
	for (i = 0; i < G->numNodes;i++)
	{
		scanf(&G->vexs[i]);
	}
	for (i=0;i<G->numNodes;i++)
	{
		for (j=0;j<G->numNodes;j++)
		{
			G->arc[i][j] = INFINITY;
		}
	}
	for (k=0;k<G->numEdges;k++)
	{
		printf("输入边(vi,vj)上的下标i，下标j和权w:\n");
		scanf("%d,%d,%d", &i, &j, &w);
		G->arc[i][j] = w;
		G->arc[j][i] = G->arc[i][j];
	}
}

int main(void)
{
	MGraph G;
	CreateMGraph(&G);

	return 0;
}












