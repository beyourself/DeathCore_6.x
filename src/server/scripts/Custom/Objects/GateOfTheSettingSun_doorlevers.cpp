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
    max_now       =  7
};

int32 GateOfTheSettingSun_lever[max_now] = 
{
211284,
460127,
460128,
460129,
460130,
460131,
460132
};

int32 GateOfTheSettingSun_door[max_now] = 
{
212982,
215380,
213397,
212985,
212986,
215130,
214888
};

class GateOfTheSettingSun_doorlevers : public GameObjectScript
{
public:
    GateOfTheSettingSun_doorlevers() : GameObjectScript("GateOfTheSettingSun_doorlevers") { }

    bool OnGossipHello(Player* player, GameObject* go)
    {
        for (int i = 0; i < max_now; i++){
        if (GameObject * GateOfTheSettingSun_Door = go->FindNearestGameObject(GateOfTheSettingSun_door[i], 100.0f))
        {
                GateOfTheSettingSun_Door->UseDoorOrButton();
                go->UseDoorOrButton();
        }
        }
            return true;

    }
};

void AddSC_GateOfTheSettingSun_doorlevers()
{
	new GateOfTheSettingSun_doorlevers();
}
