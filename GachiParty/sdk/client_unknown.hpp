#pragma once
#include "handle_entity.hpp"
class c_client_networkable;
class c_base_entity;
class i_client_renderable;
class i_collideable;
class i_client_entity;
class i_client_thinkable;
class i_client_unknown : public i_handle_entity
{
public:
	virtual i_collideable* get_collideable() = 0;
	virtual c_client_networkable* get_client_networkable() = 0;
	virtual i_client_renderable* get_client_renderable() = 0;
	virtual i_client_entity* get_client_entity() = 0;
	virtual c_base_entity* get_base_entity() = 0;
	virtual i_client_thinkable* get_client_thinkable() = 0;
};