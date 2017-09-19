/* Copyright 2017, Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "node_types.h"
#include "table_utils.h"

pycypher_node_type_t* pycypher_node_types;
size_t pycypher_node_types_len;

void pycypher_init_node_types(void) {
  INIT_TABLE(pycypher_node_type_t, pycypher_node_types, TABLE({
    {"CYPHER_AST_STATEMENT", CYPHER_AST_STATEMENT},
    {"CYPHER_AST_STATEMENT_OPTION", CYPHER_AST_STATEMENT_OPTION},
    {"CYPHER_AST_CYPHER_OPTION", CYPHER_AST_CYPHER_OPTION},
    {"CYPHER_AST_CYPHER_OPTION_PARAM", CYPHER_AST_CYPHER_OPTION_PARAM},
    {"CYPHER_AST_EXPLAIN_OPTION", CYPHER_AST_EXPLAIN_OPTION},
    {"CYPHER_AST_PROFILE_OPTION", CYPHER_AST_PROFILE_OPTION},
    {"CYPHER_AST_SCHEMA_COMMAND", CYPHER_AST_SCHEMA_COMMAND},
    {"CYPHER_AST_CREATE_NODE_PROP_INDEX", CYPHER_AST_CREATE_NODE_PROP_INDEX},
    {"CYPHER_AST_DROP_NODE_PROP_INDEX", CYPHER_AST_DROP_NODE_PROP_INDEX},
    {"CYPHER_AST_CREATE_NODE_PROP_CONSTRAINT", CYPHER_AST_CREATE_NODE_PROP_CONSTRAINT},
    {"CYPHER_AST_DROP_NODE_PROP_CONSTRAINT", CYPHER_AST_DROP_NODE_PROP_CONSTRAINT},
    {"CYPHER_AST_CREATE_REL_PROP_CONSTRAINT", CYPHER_AST_CREATE_REL_PROP_CONSTRAINT},
    {"CYPHER_AST_DROP_REL_PROP_CONSTRAINT", CYPHER_AST_DROP_REL_PROP_CONSTRAINT},
    {"CYPHER_AST_QUERY", CYPHER_AST_QUERY},
    {"CYPHER_AST_QUERY_OPTION", CYPHER_AST_QUERY_OPTION},
    {"CYPHER_AST_USING_PERIODIC_COMMIT", CYPHER_AST_USING_PERIODIC_COMMIT},
    {"CYPHER_AST_QUERY_CLAUSE", CYPHER_AST_QUERY_CLAUSE},
    {"CYPHER_AST_LOAD_CSV", CYPHER_AST_LOAD_CSV},
    {"CYPHER_AST_START", CYPHER_AST_START},
    {"CYPHER_AST_START_POINT", CYPHER_AST_START_POINT},
    {"CYPHER_AST_NODE_INDEX_LOOKUP", CYPHER_AST_NODE_INDEX_LOOKUP},
    {"CYPHER_AST_NODE_INDEX_QUERY", CYPHER_AST_NODE_INDEX_QUERY},
    {"CYPHER_AST_NODE_ID_LOOKUP", CYPHER_AST_NODE_ID_LOOKUP},
    {"CYPHER_AST_ALL_NODES_SCAN", CYPHER_AST_ALL_NODES_SCAN},
    {"CYPHER_AST_REL_INDEX_LOOKUP", CYPHER_AST_REL_INDEX_LOOKUP},
    {"CYPHER_AST_REL_INDEX_QUERY", CYPHER_AST_REL_INDEX_QUERY},
    {"CYPHER_AST_REL_ID_LOOKUP", CYPHER_AST_REL_ID_LOOKUP},
    {"CYPHER_AST_ALL_RELS_SCAN", CYPHER_AST_ALL_RELS_SCAN},
    {"CYPHER_AST_MATCH", CYPHER_AST_MATCH},
    {"CYPHER_AST_MATCH_HINT", CYPHER_AST_MATCH_HINT},
    {"CYPHER_AST_USING_INDEX", CYPHER_AST_USING_INDEX},
    {"CYPHER_AST_USING_JOIN", CYPHER_AST_USING_JOIN},
    {"CYPHER_AST_USING_SCAN", CYPHER_AST_USING_SCAN},
    {"CYPHER_AST_MERGE", CYPHER_AST_MERGE},
    {"CYPHER_AST_MERGE_ACTION", CYPHER_AST_MERGE_ACTION},
    {"CYPHER_AST_ON_MATCH", CYPHER_AST_ON_MATCH},
    {"CYPHER_AST_ON_CREATE", CYPHER_AST_ON_CREATE},
    {"CYPHER_AST_CREATE", CYPHER_AST_CREATE},
    {"CYPHER_AST_SET", CYPHER_AST_SET},
    {"CYPHER_AST_SET_ITEM", CYPHER_AST_SET_ITEM},
    {"CYPHER_AST_SET_PROPERTY", CYPHER_AST_SET_PROPERTY},
    {"CYPHER_AST_SET_ALL_PROPERTIES", CYPHER_AST_SET_ALL_PROPERTIES},
    {"CYPHER_AST_MERGE_PROPERTIES", CYPHER_AST_MERGE_PROPERTIES},
    {"CYPHER_AST_SET_LABELS", CYPHER_AST_SET_LABELS},
    {"CYPHER_AST_DELETE", CYPHER_AST_DELETE},
    {"CYPHER_AST_REMOVE", CYPHER_AST_REMOVE},
    {"CYPHER_AST_REMOVE_ITEM", CYPHER_AST_REMOVE_ITEM},
    {"CYPHER_AST_REMOVE_LABELS", CYPHER_AST_REMOVE_LABELS},
    {"CYPHER_AST_REMOVE_PROPERTY", CYPHER_AST_REMOVE_PROPERTY},
    {"CYPHER_AST_FOREACH", CYPHER_AST_FOREACH},
    {"CYPHER_AST_WITH", CYPHER_AST_WITH},
    {"CYPHER_AST_UNWIND", CYPHER_AST_UNWIND},
    {"CYPHER_AST_CALL", CYPHER_AST_CALL},
    {"CYPHER_AST_RETURN", CYPHER_AST_RETURN},
    {"CYPHER_AST_PROJECTION", CYPHER_AST_PROJECTION},
    {"CYPHER_AST_ORDER_BY", CYPHER_AST_ORDER_BY},
    {"CYPHER_AST_SORT_ITEM", CYPHER_AST_SORT_ITEM},
    {"CYPHER_AST_UNION", CYPHER_AST_UNION},
    {"CYPHER_AST_EXPRESSION", CYPHER_AST_EXPRESSION},
    {"CYPHER_AST_UNARY_OPERATOR", CYPHER_AST_UNARY_OPERATOR},
    {"CYPHER_AST_BINARY_OPERATOR", CYPHER_AST_BINARY_OPERATOR},
    {"CYPHER_AST_COMPARISON", CYPHER_AST_COMPARISON},
    {"CYPHER_AST_APPLY_OPERATOR", CYPHER_AST_APPLY_OPERATOR},
    {"CYPHER_AST_APPLY_ALL_OPERATOR", CYPHER_AST_APPLY_ALL_OPERATOR},
    {"CYPHER_AST_PROPERTY_OPERATOR", CYPHER_AST_PROPERTY_OPERATOR},
    {"CYPHER_AST_SUBSCRIPT_OPERATOR", CYPHER_AST_SUBSCRIPT_OPERATOR},
    {"CYPHER_AST_SLICE_OPERATOR", CYPHER_AST_SLICE_OPERATOR},
    {"CYPHER_AST_MAP_PROJECTION", CYPHER_AST_MAP_PROJECTION},
    {"CYPHER_AST_MAP_PROJECTION_SELECTOR", CYPHER_AST_MAP_PROJECTION_SELECTOR},
    {"CYPHER_AST_MAP_PROJECTION_LITERAL", CYPHER_AST_MAP_PROJECTION_LITERAL},
    {"CYPHER_AST_MAP_PROJECTION_PROPERTY", CYPHER_AST_MAP_PROJECTION_PROPERTY},
    {"CYPHER_AST_MAP_PROJECTION_IDENTIFIER", CYPHER_AST_MAP_PROJECTION_IDENTIFIER},
    {"CYPHER_AST_MAP_PROJECTION_ALL_PROPERTIES", CYPHER_AST_MAP_PROJECTION_ALL_PROPERTIES},
    {"CYPHER_AST_LABELS_OPERATOR", CYPHER_AST_LABELS_OPERATOR},
    {"CYPHER_AST_LIST_COMPREHENSION", CYPHER_AST_LIST_COMPREHENSION},
    {"CYPHER_AST_PATTERN_COMPREHENSION", CYPHER_AST_PATTERN_COMPREHENSION},
    {"CYPHER_AST_CASE", CYPHER_AST_CASE},
    {"CYPHER_AST_FILTER", CYPHER_AST_FILTER},
    {"CYPHER_AST_EXTRACT", CYPHER_AST_EXTRACT},
    {"CYPHER_AST_REDUCE", CYPHER_AST_REDUCE},
    {"CYPHER_AST_ALL", CYPHER_AST_ALL},
    {"CYPHER_AST_ANY", CYPHER_AST_ANY},
    {"CYPHER_AST_SINGLE", CYPHER_AST_SINGLE},
    {"CYPHER_AST_NONE", CYPHER_AST_NONE},
    {"CYPHER_AST_COLLECTION", CYPHER_AST_COLLECTION},
    {"CYPHER_AST_MAP", CYPHER_AST_MAP},
    {"CYPHER_AST_IDENTIFIER", CYPHER_AST_IDENTIFIER},
    {"CYPHER_AST_PARAMETER", CYPHER_AST_PARAMETER},
    {"CYPHER_AST_STRING", CYPHER_AST_STRING},
    {"CYPHER_AST_INTEGER", CYPHER_AST_INTEGER},
    {"CYPHER_AST_FLOAT", CYPHER_AST_FLOAT},
    {"CYPHER_AST_BOOLEAN", CYPHER_AST_BOOLEAN},
    {"CYPHER_AST_TRUE", CYPHER_AST_TRUE},
    {"CYPHER_AST_FALSE", CYPHER_AST_FALSE},
    {"CYPHER_AST_NULL", CYPHER_AST_NULL},
    {"CYPHER_AST_LABEL", CYPHER_AST_LABEL},
    {"CYPHER_AST_RELTYPE", CYPHER_AST_RELTYPE},
    {"CYPHER_AST_PROP_NAME", CYPHER_AST_PROP_NAME},
    {"CYPHER_AST_FUNCTION_NAME", CYPHER_AST_FUNCTION_NAME},
    {"CYPHER_AST_INDEX_NAME", CYPHER_AST_INDEX_NAME},
    {"CYPHER_AST_PROC_NAME", CYPHER_AST_PROC_NAME},
    {"CYPHER_AST_PATTERN", CYPHER_AST_PATTERN},
    {"CYPHER_AST_NAMED_PATH", CYPHER_AST_NAMED_PATH},
    {"CYPHER_AST_SHORTEST_PATH", CYPHER_AST_SHORTEST_PATH},
    {"CYPHER_AST_PATTERN_PATH", CYPHER_AST_PATTERN_PATH},
    {"CYPHER_AST_NODE_PATTERN", CYPHER_AST_NODE_PATTERN},
    {"CYPHER_AST_REL_PATTERN", CYPHER_AST_REL_PATTERN},
    {"CYPHER_AST_RANGE", CYPHER_AST_RANGE},
    {"CYPHER_AST_COMMAND", CYPHER_AST_COMMAND},
    {"CYPHER_AST_COMMENT", CYPHER_AST_COMMENT},
    {"CYPHER_AST_LINE_COMMENT", CYPHER_AST_LINE_COMMENT},
    {"CYPHER_AST_BLOCK_COMMENT", CYPHER_AST_BLOCK_COMMENT},
    {"CYPHER_AST_ERROR", CYPHER_AST_ERROR},
  }))
}
