/*
 * Copyright (C) 2015 Jolla Ltd.
 * Copyright 2016 The Ubports project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Authored by: Juho Hämäläinen <juho.hamalainen@jolla.com>
 *              Marius Gripsgard <mariogrip@ubports.com>
 */

#include "audioflingerglue.h"
#include <dlfcn.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <hybris/common/binding.h>

// TODO: add lib64 support
HYBRIS_LIBRARY_INITIALIZE(audioflingerglue, "/system/lib/libaudioflingerglue.so");

HYBRIS_IMPLEMENT_FUNCTION2(audioflingerglue, DroidAfGlue*, droid_afglue_connect, DroidAfGlueCallbacks*, void*);
HYBRIS_IMPLEMENT_VOID_FUNCTION1(audioflingerglue, droid_afglue_disconnect, DroidAfGlue*);
