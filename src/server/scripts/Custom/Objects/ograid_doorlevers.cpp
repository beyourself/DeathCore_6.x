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
    max_now       =  6
};

int32 ograid_lever[max_now] = 
{
460105,
460106,
460113,
460114,
460115,
460116
};

int32 ograid_door[max_now] = 
{
460107,
460108,
460109,
460110,
460111,
460112
};

class ograid_doorlevers : public GameObjectScript
{
public:
    ograid_doorlevers() : GameObjectScript("ograid_doorlevers") { }

    bool OnGossipHello(Player* player, GameObject* go)
    {
        for (int i = 0; i < max_now; i++){
        if (GameObject * ograid_Door = go->FindNearestGameObject(ograid_door[i], 100.0f))
        {
                ograid_Door->UseDoorOrButton();
                go->UseDoorOrButton();
        }
        }
            return true;

    }
};

void AddSC_ograid_doorlevers()
{
	new ograid_doorlevers();
}
