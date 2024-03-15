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

#ifndef AUTOKRAKEN_PROJECT_HPP
#define AUTOKRAKEN_PROJECT_HPP

#include<Definitions.hpp>
#include<string>
#include<vector>

namespace ak
{
    class Project
    {
        struct ScriptItem
        {
            UID _id;
            std::string _filename;
        };

        struct Playlist
        {
            UID _id;
            std::string _name;
            std::vector<UID> _scripts;
        };

    public:
        Project();

        [[nodiscard]]
        const std::vector<ScriptItem>& GetAllScripts() const
        {
            return _scripts;
        }

        [[nodiscard]]
        const std::vector<Playlist>& GetAllPlaylists() const
        {
            return _playlists;
        }

        AKResult AddNewScript(const std::string& filename);

        AKResult AddScriptToPlaylist(UID scriptID, UID playlistID);


    private:
        std::vector<ScriptItem> _scripts;
        std::vector<Playlist> _playlists;

    };
}


#endif //AUTOKRAKEN_PROJECT_HPP
