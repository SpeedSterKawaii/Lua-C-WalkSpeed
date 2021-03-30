void WalkSpeed()
{
	r_lua_getglobal(RL, "game");
	r_lua_getfield(RL, -1, "Players");
	r_lua_getfield(RL, -1, "LocalPlayer");
	r_lua_getfield(RL, -1, "Character");
	r_lua_getfield(RL, -1, "Humanoid");
	r_lua_pushnumber(RL, 100);
	r_lua_setfield(RL, -2, "WalkSpeed");
}
