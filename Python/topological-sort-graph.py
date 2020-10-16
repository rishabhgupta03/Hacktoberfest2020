from stackADT import Stack

visited = []
st = Stack(100)


class Graph:
    def _init_(self):
        self.graph = {}
        self.vertList = set()

    def addEdge(self, u, v):
        self.vertList.add(u)
        self.vertList.add(v)
        try:
            self.graph[u].append(v)
        except:
            self.graph[u] = []
            self.graph[u].append(v)

    def topologicalSort(self, start, stack, visited):

        visited.append(start)
        try:
            for i in self.graph[start]:
                if i not in visited:
                    self.topologicalSort(i, stack, visited)
        except:
            pass
        stack.push(start)


def topologicalSort(graph):
    global st, visited
    st = Stack(len(graph.vertList))
    for i in graph.vertList:
        if i not in visited:
            graph.topologicalSort(i, st, visited)
    for i in range(len(graph.vertList)):
        print(st.pop())


def main():

    g = Graph()
    # Graph 1
    # print("Graph 1")
    # g.addEdge(5, 2)
    # g.addEdge(5, 0)
    # g.addEdge(4, 0)
    # g.addEdge(4, 1)
    # g.addEdge(2, 3)

    # Graph 2
    print("Graph 2")
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(2, 3)
    g.addEdge(1, 2)
    g.addEdge(1, 5)
    g.addEdge(6, 1)
    g.addEdge(6, 5)
    g.addEdge(5, 4)
    g.addEdge(5, 3)

    topologicalSort(g)


if _name_ == "_main_":
    main()
