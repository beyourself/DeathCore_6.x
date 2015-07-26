/*
 * Copyright (C) 2013-2015 DeathCore <http://www.noffearrdeathproject.net/> 
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

enum DoorLever{
    max_now       =  11
};

int32 shadopan_monastery_lever[max_now] = 
{
213457,
213458,
213463,
15003098,
15003099,
15003100,
15003101,
15003102,
15003103,
15003104
};

int32 shadopan_monastery_door[max_now] = 
{
209311,
212062,
212063,
210800,
210862,
210863,
210864,
210866,
210867,
213194,
212064
};

class shadopan_monastery_doorlevers : public GameObjectScript
{
public:
    shadopan_monastery_doorlevers() : GameObjectScript("shadopan_monastery_doorlevers") { }

    bool OnGossipHello(Player* player, GameObject* go)
    {
        for (int i = 0; i < max_now; i++){
        if (GameObject * shadopan_monastery_Door = go->FindNearestGameObject(shadopan_monastery_door[i], 100.0f))
        {
                shadopan_monastery_Door->UseDoorOrButton();
                go->UseDoorOrButton();
        }
        }
            return true;

    }
};

void AddSC_shadopan_monastery_doorlevers()
{
	new shadopan_monastery_doorlevers();
}
