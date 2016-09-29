//
//  DynamicBindings.c
//  MessagesGame
//
//  Created by Victor Pavlychko on 8/31/16.
//  Copyright © 2016 Timecode. All rights reserved.
//

#include "DynamicBindings.h"

_spAtlasPage_createTexture_t _spAtlasPage_createTexture_func = NULL;
_spAtlasPage_disposeTexture_t _spAtlasPage_disposeTexture_func = NULL;
_spUtil_readFile_t _spUtil_readFile_func = NULL;

void _spAtlasPage_createTexture (spAtlasPage* self, const char* path)
{
    _spAtlasPage_createTexture_func(self, path);
}

void _spAtlasPage_disposeTexture (spAtlasPage* self)
{
    _spAtlasPage_disposeTexture_func(self);
}

char* _spUtil_readFile (const char* path, int* length)
{
    return _spUtil_readFile_func(path, length);
}
