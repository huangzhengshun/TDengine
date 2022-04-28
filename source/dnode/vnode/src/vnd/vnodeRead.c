/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "vnd.h"

typedef struct STsdb STsdb;

tsdbReaderT *tdQueryTables(SVnode *pVnode, SQueryTableDataCond *pCond, STableGroupInfo *tableInfoGroup, uint64_t qId,
                           uint64_t taskId) {
  return tsdbQueryTables(pVnode->pTsdb, pCond, tableInfoGroup, qId, taskId);
}

tsdbReaderT tdQueryCacheLast(SVnode *pVnode, SQueryTableDataCond *pCond, STableGroupInfo *groupList, uint64_t qId,
                             void *pMemRef) {
  return NULL;
#if 0
  return tsdbQueryCacheLast(pVnode->pTsdb, pCond, groupList, qId, pMemRef);
#endif
}
int32_t tdGetFileBlocksDistInfo(tsdbReaderT *pReader, STableBlockDistInfo *pTableBlockInfo) {
  return tsdbGetFileBlocksDistInfo(pReader, pTableBlockInfo);
}
bool    isTdCacheLastRow(tsdbReaderT *pReader) { return isTsdbCacheLastRow(pReader); }
int32_t tdQuerySTableByTagCond(void *pMeta, uint64_t uid, TSKEY skey, const char *pTagCond, size_t len,
                               int16_t tagNameRelType, const char *tbnameCond, STableGroupInfo *pGroupInfo,
                               SColIndex *pColIndex, int32_t numOfCols, uint64_t reqId, uint64_t taskId) {
  return tsdbQuerySTableByTagCond(pMeta, uid, skey, pTagCond, len, tagNameRelType, tbnameCond, pGroupInfo, pColIndex,
                                  numOfCols, reqId, taskId);
}
int64_t tdGetNumOfRowsInMemTable(tsdbReaderT *pHandle) { return tsdbGetNumOfRowsInMemTable(pHandle); }
bool    tdNextDataBlock(tsdbReaderT pTsdbReadHandle) { return tsdbNextDataBlock(pTsdbReadHandle); }
void    tdRetrieveDataBlockInfo(tsdbReaderT *pTsdbReadHandle, SDataBlockInfo *pBlockInfo) {
  tsdbRetrieveDataBlockInfo(pTsdbReadHandle, pBlockInfo);
}
int32_t tdRetrieveDataBlockStatisInfo(tsdbReaderT *pTsdbReadHandle, SColumnDataAgg **pBlockStatis) {
  return tsdbRetrieveDataBlockStatisInfo(pTsdbReadHandle, pBlockStatis);
}
SArray *tdRetrieveDataBlock(tsdbReaderT *pTsdbReadHandle, SArray *pColumnIdList) {
  return tsdbRetrieveDataBlock(pTsdbReadHandle, pColumnIdList);
}
void tdResetReadHandle(tsdbReaderT queryHandle, SQueryTableDataCond *pCond) { tsdbResetReadHandle(queryHandle, pCond); }
void tdDestroyTableGroup(STableGroupInfo *pGroupList) {
#if 0
  tsdbDestroyTableGroup(pGroupList);
#endif
}
int32_t tdGetOneTableGroup(void *pMeta, uint64_t uid, TSKEY startKey, STableGroupInfo *pGroupInfo) {
  return tsdbGetOneTableGroup(pMeta, uid, startKey, pGroupInfo);
}
int32_t tdGetTableGroupFromIdList(SVnode *pVnode, SArray *pTableIdList, STableGroupInfo *pGroupInfo) {
  return 0;
#if 0
  return tsdbGetTableGroupFromIdList(pVnode->pTsdb, pTableIdList, pGroupInfo);
#endif
}