-- LuaRocks configuration

rocks_trees = {
   { name = "user", root = home .. "/.luarocks" };
   { name = "system", root = "/home/montana/RobinsonOpenFOAMProject/swak4Foam/privateRequirements" };
}
lua_interpreter = "lua";
variables = {
   LUA_DIR = "/home/montana/RobinsonOpenFOAMProject/swak4Foam/privateRequirements";
   LUA_BINDIR = "/home/montana/RobinsonOpenFOAMProject/swak4Foam/privateRequirements/bin";
}
