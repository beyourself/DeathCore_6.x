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
    max_now       =  2
};

int32 HeartofFear_lever[max_now] = 
{
460100,
460101
};

int32 HeartofFear_door[max_now] = 
{
4707,
4760
};

class HeartofFear_doorlevers : public GameObjectScript
{
public:
    HeartofFear_doorlevers() : GameObjectScript("HeartofFear_doorlevers") { }

    bool OnGossipHello(Player* player, GameObject* go)
    {
        for (int i = 0; i < max_now; i++){
        if (GameObject * HeartofFear_Door = go->FindNearestGameObject(HeartofFear_door[i], 100.0f))
        {
                HeartofFear_Door->UseDoorOrButton();
                go->UseDoorOrButton();
        }
        }
            return true;

    }
};

void AddSC_HeartofFear_doorlevers()
{
	new HeartofFear_doorlevers();
}
