/*
  ArduCuff - December 2011
  www.code.google.com/p/arducuff/
  Copyright (c) 2011 ArduCuff.  All rights reserved.
  An Open Source Arduino based blood pressure monitor system.
 
  This program is free software: you can redistribute it and/or modify 
  it under the terms of the GNU General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or 
  (at your option) any later version. 
 
  This program is distributed in the hope that it will be useful, 
  but WITHOUT ANY WARRANTY; without even the implied warranty of 
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
  GNU General Public License for more details. 
 
  You should have received a copy of the GNU General Public License 
  along with this program. If not, see <http://www.gnu.org/licenses/>. 
*/


/* ****************************************************************************** */
/* ****************************** Includes ************************************** */
/* ****************************************************************************** */

#include <Wire.h>
#include <arducuff.h>
#include <Math.h>
#include <MCP23008.h> //MCP23008 I/O expander
MCP23008 mcp;
#define VER  0.1    // Software version 





void setup()
{
Serial.begin(115200);
mcp.begin();      // use default address 0


}

void loop()
{

}
