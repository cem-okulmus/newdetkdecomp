* What's the point of the SuperEdge? (assuming it's an optimization)
    * Seems that Superedge clusters multiple edges to be treated as one, therefore the need for
    a weight function to compute the cardinality.
* Why does divideCompEdge include edges from outside of HEdges?
    * It selects for boundary edges all hyperedges in the graph that share one of the boundary nodes
* How does coverNodes iterate through HEdges to select the next Subset

* Exact meaning of inComp boolean array in coverNodes
    Uses data from divideCompEdge, indicates which bound Edges are part of HEdges (in component)

* Decomp arguments: The new component as HyperEdges (instead of vertices as in original Gottlob et al.), and the old seperator as verticse (connector between new component and old seperator) instead of Hyperedges

* Advanced Algorithms: First an extension the Samer algorithm to deal with GHD (Global and Local BIP?), then one to produce FHD by "fractionally improving" a GHD (FracImprove), and last an optmiziation on the GHD algorithm (BalSepK). Leaves only RankFHD unexplained

QUESTION: Why use Set and Vector at various places?
QUESTION: Don't undestand the "reroot" bit in the Benchmark paper
QUESTION Source and explanation on Rank
QUESTION Ask for a walkthrough of BalSe