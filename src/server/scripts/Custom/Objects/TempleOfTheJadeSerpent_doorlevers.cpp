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
    max_now       =  8
};

int32 TempleOfTheJadeSerpent_lever[max_now] = 
{
460133,
460134,
460135,
460136,
460137,
460138,
460139,
460140
};

int32 TempleOfTheJadeSerpent_door[max_now] = 
{
211280,
213544,
213545,
213547,
213548,
213549,
213550,
213903
};

class TempleOfTheJadeSerpent_doorlevers : public GameObjectScript
{
public:
    TempleOfTheJadeSerpent_doorlevers() : GameObjectScript("TempleOfTheJadeSerpent_doorlevers") { }

    bool OnGossipHello(Player* player, GameObject* go)
    {
        for (int i = 0; i < max_now; i++){
        if (GameObject * TempleOfTheJadeSerpent_Door = go->FindNearestGameObject(TempleOfTheJadeSerpent_door[i], 100.0f))
        {
                TempleOfTheJadeSerpent_Door->UseDoorOrButton();
                go->UseDoorOrButton();
        }
        }
            return true;

    }
};

void AddSC_TempleOfTheJadeSerpent_doorlevers()
{
	new TempleOfTheJadeSerpent_doorlevers();
}
