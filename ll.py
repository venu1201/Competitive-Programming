class Graph():

	def __init__(self, vertices):
		self.V = vertices
		self.graph = [[0 for column in range(vertices)]
					for row in range(vertices)]

	def prisol(self, dist):
		print("Vertex \t Distance from Source")
		for node in range(self.V):
			print(node, "\t\t", dist[node])

	def minD(self, dist, sptSet):

		
		min = 1e7

		
		for i in range(self.V):
			if dist[i] < min and sptSet[i] == False:
				min = dist[i]
				min_index = i

		return min_index

	def dijkstra(self, src):

		dist = [1e7] * self.V
		dist[src] = 0
		sptSet = [False] * self.V

		for cout in range(self.V):

			u = self.minD(dist, sptSet)

			sptSet[u] = True
			for v in range(self.V):
				if (self.graph[u][v] > 0 and
				sptSet[v] == False and
				dist[v] > dist[u] + self.graph[u][v]):
					dist[v] = dist[u] + self.graph[u][v]

		self.prisol(dist)

grp = Graph(9)
grp.graph = [[0, 4, 1, 0, 0, 0, 0, 8, 0],
		[4, 0, 8, 0, 0, 0, 0, 11, 0],
		[0, 8, 0, 7, 0, 4, 0, 1, 2],
		[0, 1, 7, 0, 9, 14, 0, 1, 0],
		[6, 8, 0, 9, 1, 10, 0, 0, 0],
		[0, 0, 4, 14, 10, 0, 2, 0, 0],
		[0, 0, 0, 0, 0, 2, 0, 1, 6],
		[8, 11, 0, 0, 2, 0, 1, 0, 7],
		[0, 0, 2, 0, 1, 0, 6, 7, 1]
		]
#at index 0
grp.dijkstra(0)

