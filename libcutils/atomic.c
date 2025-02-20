/*
 * Copyright (C) 2007 The Android Open Source Project
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
 */

/*
 * Generate non-inlined versions of android_atomic functions.
 * Nobody should be using these, but some binary blobs currently (late 2014)
 * are.
 * If you read this in 2015 or later, please try to delete this file.
 */

#define ANDROID_ATOMIC_INLINE

#include <cutils/atomic.h>

//the linkable version of atomic functions (names are altered to avoid name conflict), provided for backward compatibility

int32_t androidatomic__inc(volatile int32_t* addr)
{
		return android_atomic_inc(addr);
}

int32_t androidatomic__dec(volatile int32_t* addr)
{
		return android_atomic_dec(addr);
}

int32_t androidatomic__add(int32_t value, volatile int32_t* addr)
{
		return android_atomic_add(value, addr);
}

int32_t androidatomic__and(int32_t value, volatile int32_t* addr)
{
		return android_atomic_and(value, addr);
}

int32_t androidatomic__or(int32_t value, volatile int32_t* addr)
{
		return android_atomic_or(value, addr);
}

int androidatomic__acquire_cas(int32_t oldvalue, int32_t newvalue, volatile int32_t* addr)
{
		return android_atomic_acquire_cas(oldvalue, newvalue, addr);
}

int androidatomic__release_cas(int32_t oldvalue, int32_t newvalue, volatile int32_t* addr)
{
		return android_atomic_release_cas(oldvalue, newvalue, addr);
}

