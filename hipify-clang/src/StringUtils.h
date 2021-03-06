/*
Copyright (c) 2015 - present Advanced Micro Devices, Inc. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#pragma once

#include <string>
#include "llvm/ADT/StringRef.h"

/**
  * Remove double-quotes from the start/end of a string, if present.
  */
llvm::StringRef unquoteStr(llvm::StringRef s);

/**
  * If `s` starts with `prefix`, remove it. Otherwise, does nothing.
  */
void removePrefixIfPresent(std::string &s, const std::string& prefix);

/**
  * Returns Absolute File Path based on filename, otherwise - error.
  */
std::string getAbsoluteFilePath(const std::string& sFile, std::error_code& EC);

/**
  * Returns Absolute Directory Path based on directory name, otherwise - error;
  * by default the directory is temporary and created.
  */
std::string getAbsoluteDirectoryPath(const std::string& sDir, std::error_code& EC,
  const std::string& sDirType = "temporary", bool bCreateDir = true);
