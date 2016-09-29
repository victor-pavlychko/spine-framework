//
//  DynamicBindings.h
//  MessagesGame
//
//  Created by Victor Pavlychko on 8/31/16.
//  Copyright © 2016 Timecode. All rights reserved.
//

#include <spine/extension.h>

__BEGIN_DECLS

typedef void (*_spAtlasPage_createTexture_t)(spAtlasPage* self, const char* path);
typedef void (*_spAtlasPage_disposeTexture_t)(spAtlasPage* self);
typedef char* (*_spUtil_readFile_t)(const char* path, int* length);

extern _spAtlasPage_createTexture_t _spAtlasPage_createTexture_func;
extern _spAtlasPage_disposeTexture_t _spAtlasPage_disposeTexture_func;
extern _spUtil_readFile_t _spUtil_readFile_func;

__END_DECLS
