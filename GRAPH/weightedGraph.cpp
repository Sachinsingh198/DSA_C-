#include <iostream>
#include <unordered_map>
#include <list>

class Graph{
    std::unordered_map<std::string, std::list<std::pair<std::string, int>>> l;
    
    public:
    void addEdge(std::string x, std::string y, bool bidir, int wt){
        l[x].push_back(make_pair(y, wt));
        if(bidir){
            l[y].push_back(make_pair(x, wt));
        }
    }

    void printAdjList(void){
        for(auto p: l){
            std::string city = p.first;
            std::list<std::pair<std::string, int>> nbrs = p.second;

            std::cout<<city<<"-->";
            for(auto nbr: nbrs){
                std::string dest = nbr.first;
                int dist = nbr.second;

                std::cout<<dest<<" "<<dist<<", ";
            }
            std::cout<<std::endl;
        }
    }

};

int main(){
    Graph g;
    g.addEdge("A", "B", true, 20);
    g.addEdge("B", "D", true, 40);
    g.addEdge("C", "D", true, 30);
    g.addEdge("A", "C", true, 10);
    g.addEdge("A", "D", false, 50);
    g.printAdjList();
    return 0;
}