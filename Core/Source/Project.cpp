// MIT License
//
// Copyright (c) 2024 Himanshu Parchand
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

//
// Created by himan on 22/02/2024.
//

#include<Project.hpp>

#include<fstream>
#include<algorithm>

ak::Project::Project() = default;

ak::AKResult ak::Project::AddNewScript(const std::string& filename)
{
    std::fstream stream;
    stream.open(filename);

    if(!stream.is_open())
    {
        return AKResult::FILE_NOT_FOUND;
    }

    //_scripts.Add(ScriptItem())

    return AKResult::SUCCESS;

}

ak::AKResult ak::Project::AddScriptToPlaylist(ak::UID scriptID, ak::UID playlistID)
{
    if(auto playlist = std::find_if(_playlists.begin(), _playlists.end(),
                                    [&playlistID](const Playlist& pl){ return pl._id == playlistID;});
            playlist != _playlists.end())
    {
        playlist->_scripts.push_back(scriptID);
        return AKResult::SUCCESS;
    }
    return ak::AKResult::UNEXPECTED_NULLPTR;
}
