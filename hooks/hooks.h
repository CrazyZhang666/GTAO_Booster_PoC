#pragma once

size_t strlenHook(char* str);

char __fastcall netCatalogueInsertUniqueHook(uint64_t catalog, uint64_t* key, uint64_t* item);

void initHooks(void);
