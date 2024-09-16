/* Copyright 2024 Indian Institute Of Technology Hyderbad, India. All Rights Reserved.
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
// Authors: Karthik V., Saim Khan, Somesh Singh
//

#ifndef BANG_H_
#define BANG_H_

/*! @brief Load the graph index, compressed vectors etc into CPU/GPU memory.
*
* The graph index, compressed vectors has to be generated using DiskANN.
* Search can be performed bang_query() .
*
* @param[in] indexfile_path_prefix Absolute path location where DiskANN generated files are present. (including the file prefix)

*/
template<typename T>
void bang_load( char* indexfile_path_prefix);

/*! @brief Runs search queries on the laoded index..
*
* The graph index, compressed vectors has to be generated using DiskANN.
* Search can be performed bang_query() .
*
* @param[in] query_file Absolute path of the query file in bin format.
* @param[in] groundtruth_file Absolute path of the groundtruth file in bin format (generated usign DiskANN).
* @param[in] num_queries Number of queries to be used for the search.
* @param[in] recal_param k-recall@k.

*/
template<typename T>
void bang_query(char* query_file, char* groundtruth_file, int num_queries, int recal_param);

#endif //BANG_H_