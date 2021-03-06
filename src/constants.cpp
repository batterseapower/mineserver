/*
   Copyright (c) 2010, The Mineserver Project
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
 * Neither the name of the The Mineserver Project nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
   ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
   DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
   DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
   ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <string>
#include <map>

#include "constants.h"

std::map<std::string, std::string> defaultConf;
std::map<uint8, Drop> BLOCKDROPS;

void initConstants()
{
  // Init configuration
  defaultConf.insert(std::pair<std::string, std::string>("ip", "0.0.0.0"));
  defaultConf.insert(std::pair<std::string, std::string>("port", "25565"));
  defaultConf.insert(std::pair<std::string, std::string>("servername", "Minecraft server"));
  defaultConf.insert(std::pair<std::string, std::string>("use_whitelist", "false"));
  defaultConf.insert(std::pair<std::string, std::string>("mapdir", "testmap"));
  defaultConf.insert(std::pair<std::string, std::string>("userlimit", "20"));
  defaultConf.insert(std::pair<std::string, std::string>("map_release_time", "10"));
  defaultConf.insert(std::pair<std::string, std::string>("liquid_physics", "true"));
  defaultConf.insert(std::pair<std::string, std::string>("map_flatland", "false"));
  defaultConf.insert(std::pair<std::string, std::string>("oreDensity", "24"));
  defaultConf.insert(std::pair<std::string, std::string>("seaLevel", "63"));
  defaultConf.insert(std::pair<std::string, std::string>("server_full_message", "Server is currently full"));
  defaultConf.insert(std::pair<std::string, std::string>("default_kick_message", "You have been kicked"));
  defaultConf.insert(std::pair<std::string, std::string>("wrong_protocol_message", "Wrong client protocol"));
  defaultConf.insert(std::pair<std::string, std::string>("admin_file", "admin.txt"));
  defaultConf.insert(std::pair<std::string, std::string>("motd_file", "motd.txt"));
  defaultConf.insert(std::pair<std::string, std::string>("rules_file", "rules.txt"));

  // Block drops (10000 = 100%)
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_STONE, Drop(BLOCK_COBBLESTONE, 10000, 1, true)));
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_GRASS, Drop(BLOCK_DIRT, 10000, 1, true)));
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_GRAVEL, Drop(ITEM_FLINT, 850, 1, false)));
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_COAL_ORE, Drop(ITEM_COAL, 10000, 1, true)));
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_LEAVES, Drop(BLOCK_SAPLING, 1200, 1, true)));
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_DIAMOND_ORE, Drop(ITEM_DIAMOND, 10000, 1, true)));
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_REDSTONE_ORE, Drop(ITEM_REDSTONE, 10000, 4, true)));
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_CLAY, Drop(ITEM_CLAY_BALLS, 10000, 4, true)));

  // Blocks that drop nothing
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_TNT, Drop(BLOCK_TNT, 10000, 0, true)));
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_GLASS, Drop(BLOCK_GLASS, 10000, 0, true)));
  BLOCKDROPS.insert(std::pair<uint8, Drop>(BLOCK_MOB_SPAWNER, Drop(BLOCK_MOB_SPAWNER, 10000, 0, true)));
}
