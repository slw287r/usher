#include "mutation_annotated_tree.hpp"
#include <tbb/concurrent_vector.h>
void Fitch_Sankoff_Whole_Tree(const std::vector<Mutation_Annotated_Tree::Node*> bfs_ordered_nodes,const Mutation_Annotated_Tree::Mutation & base,const std::unordered_map<std::string, nuc_one_hot>& mutated,std::vector<tbb::concurrent_vector<Mutation_Annotated_Tree::Mutation>>& output,bool try_similar=false);
void FS_backward_pass(const std::vector<Mutation_Annotated_Tree::Node*> bfs_ordered_nodes, std::vector<uint8_t>& boundary1_major_allele,const std::unordered_map<std::string, nuc_one_hot>& mutated,nuc_one_hot ref_nuc);
int FS_forward_assign_states_only(const std::vector<Mutation_Annotated_Tree::Node*>& bfs_ordered_nodes,const std::vector<uint8_t>& boundary1_major_allele,const nuc_one_hot parent_state,std::vector<uint8_t>& states_out,std::vector<std::vector<Mutation_Annotated_Tree::Node*>>& children_mutation_count);
void set_state_from_cnt(const std::array<int,4>& data, uint8_t& boundary1_major_allele_out);