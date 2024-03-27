/**
 * tree
 * - a tree is a linked structure with a sense of ancestry (parents, children, siblings, and more)
 * 
 * terminology
 * - "node": each element in our tree is a "node"
 * - "edge": each connection between two nodes is an "edge"
 * - "root node": tree must always contain a "root node" that has no incoming edges.
 * - "leaf node": nodes that contain no outgoing edges are called "leaf nodes"
 * - in a tree, the nodes will store data and may be labeled
 * - edge do not have names, but are referred to by the nodes they connect
 * - "parent node": every node, except root node, has exactly one parent node
 * - "children node": a node's "children" are the nodes with that node as it's parent
 * - three conditions must be true:
 *     + must have a root
 *     + must have directed edges
 *     + must not have a cycle
*/