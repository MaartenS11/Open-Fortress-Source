//====== Copyright � 1996-2005, Valve Corporation, All rights reserved. =======//
//
// Purpose: CTF AmmoPack.
//
//=============================================================================//
#ifndef ENTITY_WEAPON_SPAWNER_H
#define ENTITY_WEAPON_SPAWNER_H

#ifdef _WIN32
#pragma once
#endif

#include "tf_powerup.h"

//=============================================================================
//
// CTF AmmoPack class.
//

class CWeaponSpawner : public CTFPowerup
{
public:
	DECLARE_CLASS( CWeaponSpawner, CTFPowerup );

	void	Spawn( void );
	void	Precache( void );
	bool	MyTouch( CBasePlayer *pPlayer );

	powerupsize_t	GetPowerupSize( void ) { return POWERUP_FULL; }

	virtual const char *GetPowerupModel( void ) { return "models/weapons/w_models/w_scattergun.mdl"; }
};

#endif // ENTITY_WEAPON_SPAWNER_H

