* What's the point of the SuperEdge? (assuming it's an optimization)
    * Seems that Superedge clusters multiple edges to be treated as one, therefore the need for
    a weight function to compute the cardinality.
* Why does divideCompEdge include edges from outside of HEdges?
    * It selects for boundary edges all hyperedges in the graph that share one of the boundary nodes
* How does coverNodes iterate through HEdges to select the next Subset

* Exact meaning of inComp boolean array in coverNodes
