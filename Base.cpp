/*
 * Copyright 2010 Daniel Albano
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "Base.h"

/**
 * Initializes an empty base at specific globe coordinates.
 * @param lat Latitude in radian.
 * @param lon Longitude in radian.
 */
Base::Base(double lat, double lon) : _lat(lat), _lon(lon), _name(""), _facilities(), _soldiers(), _crafts(), _scientists(0), _engineers(0)
{
}

/**
 *
 */
Base::~Base()
{
}

/**
 * Returns the custom name for the base.
 * @return Name.
 */
string Base::getName()
{
	return _name;
}

/**
 * Changes the custom name for the base.
 * @param name Name.
 */
void Base::setName(string name)
{
	_name = name;
}

/**
 * Returns the latitude coordinate of the base.
 * @return Latitude in radian.
 */
double Base::getLatitude()
{
	return _lat;
}

/**
 * Returns the longitude coordinate of the base.
 * @return Longitude in radian.
 */
double Base::getLongitude()
{
	return _lon;
}

/**
 * Returns the list of facilities in the base.
 * @return Pointer to the facility list.
 */
vector<BaseFacility*> *Base::getFacilities()
{
	return &_facilities;
}

/**
 * Returns the list of soldiers in the base.
 * @return Pointer to the soldier list.
 */
vector<Soldier*> *Base::getSoldiers()
{
	return &_soldiers;
}

/**
 * Returns the list of crafts in the base.
 * @return Pointer to the craft list.
 */
vector<Craft*> *Base::getCrafts()
{
	return &_crafts;
}

/**
 * Changes the amount of scientists in the base.
 * @param scientists Number of scientists.
 */
void Base::setScientists(int scientists)
{
	 _scientists = scientists;
}

/**
 * Changes the amount of engineers in the base.
 * @param engineers Number of engineers.
 */
void Base::setEngineers(int engineers)
{
	 _engineers = engineers;
}

/**
 * Returns the amount of soldiers contained
 * in the base without any assignments.
 * @return Number of soldiers.
 */
int Base::getAvailableSoldiers()
{
	int total = 0;
	for (vector<Soldier*>::iterator i = _soldiers.begin(); i != _soldiers.end(); i++)
	{
		if ((*i)->getCraft() == 0)
			total++;
	}
	return total;
}

/**
 * Returns the total amount of soldiers contained
 * in the base.
 * @return Number of soldiers.
 */
int Base::getTotalSoldiers()
{
	return _soldiers.size();
}

/**
 * Returns the amount of scientists contained
 * in the base without any assignments.
 * @return Number of scientists.
 */
int Base::getAvailableScientists()
{
	return 0;
}

/**
 * Returns the total amount of scientists contained
 * in the base.
 * @return Number of scientists.
 */
int Base::getTotalScientists()
{
	return _scientists;
}

/**
 * Returns the amount of engineers contained
 * in the base without any assignments.
 * @return Number of engineers.
 */
int Base::getAvailableEngineers()
{
	return 0;
}

/**
 * Returns the total amount of engineers contained
 * in the base.
 * @return Number of engineers.
 */
int Base::getTotalEngineers()
{
	return _engineers;
}

/**
 * Returns the amount of living quarters used up
 * by personnel in the base.
 * @return Living space.
 */
int Base::getUsedQuarters()
{
	return getTotalSoldiers() + getTotalScientists() + getTotalEngineers();
}

/**
 * Returns the total amount of living quarters
 * available in the base.
 * @return Living space.
 */
int Base::getAvailableQuarters()
{
	int total = 0;
	for (vector<BaseFacility*>::iterator i = _facilities.begin(); i != _facilities.end(); i++)
	{
		if ((*i)->getBuildTime() == 0)
			total += (*i)->getRules()->getPersonnel();
	}
	return total;
}

/**
 * Returns the amount of stores used up
 * by equipment in the base.
 * @return Storage space.
 */
int Base::getUsedStores()
{
	return 0;
}

/**
 * Returns the total amount of stores
 * available in the base.
 * @return Storage space.
 */
int Base::getAvailableStores()
{
	int total = 0;
	for (vector<BaseFacility*>::iterator i = _facilities.begin(); i != _facilities.end(); i++)
	{
		if ((*i)->getBuildTime() == 0)
			total += (*i)->getRules()->getStorage();
	}
	return total;
}

/**
 * Returns the amount of laboratories used up
 * by research projects in the base.
 * @return Laboratory space.
 */
int Base::getUsedLaboratories()
{
	return 0;
}

/**
 * Returns the total amount of laboratories
 * available in the base.
 * @return Laboratory space.
 */
int Base::getAvailableLaboratories()
{
	int total = 0;
	for (vector<BaseFacility*>::iterator i = _facilities.begin(); i != _facilities.end(); i++)
	{
		if ((*i)->getBuildTime() == 0)
			total += (*i)->getRules()->getLaboratories();
	}
	return total;
}

/**
 * Returns the amount of workshops used up
 * by manufacturing projects in the base.
 * @return Storage space.
 */
int Base::getUsedWorkshops()
{
	return 0;
}

/**
 * Returns the total amount of workshops
 * available in the base.
 * @return Workshop space.
 */
int Base::getAvailableWorkshops()
{
	int total = 0;
	for (vector<BaseFacility*>::iterator i = _facilities.begin(); i != _facilities.end(); i++)
	{
		if ((*i)->getBuildTime() == 0)
			total += (*i)->getRules()->getWorkshops();
	}
	return total;
}

/**
 * Returns the amount of hangars used up
 * by crafts in the base.
 * @return Storage space.
 */
int Base::getUsedHangars()
{
	return _crafts.size();
}

/**
 * Returns the total amount of hangars
 * available in the base.
 * @return Number of hangars.
 */
int Base::getAvailableHangars()
{
	int total = 0;
	for (vector<BaseFacility*>::iterator i = _facilities.begin(); i != _facilities.end(); i++)
	{
		if ((*i)->getBuildTime() == 0)
			total += (*i)->getRules()->getCrafts();
	}
	return total;
}

/**
 * Returns the total defence value of all
 * the facilities in the base.
 * @return Defence value.
 */
int Base::getDefenceValue()
{
	int total = 0;
	for (vector<BaseFacility*>::iterator i = _facilities.begin(); i != _facilities.end(); i++)
	{
		if ((*i)->getBuildTime() == 0)
			total += (*i)->getRules()->getDefenceValue();
	}
	return total;
}

/**
 * Returns the total amount of short range
 * detection facilities in the base.
 * @return Defence value.
 */
int Base::getShortRangeDetection()
{
	int total = 0;
	for (vector<BaseFacility*>::iterator i = _facilities.begin(); i != _facilities.end(); i++)
	{
		if ((*i)->getBuildTime() == 0)
			if ((*i)->getRules()->getRadarRange() == 2000)
				total++;
	}
	return total;
}

/**
 * Returns the total amount of long range
 * detection facilities in the base.
 * @return Defence value.
 */
int Base::getLongRangeDetection()
{
	int total = 0;
	for (vector<BaseFacility*>::iterator i = _facilities.begin(); i != _facilities.end(); i++)
	{
		if ((*i)->getBuildTime() == 0)
			if ((*i)->getRules()->getRadarRange() > 2000)
				total++;
	}
	return total;
}

/**
 * Returns the total amount of craft of
 * a certain type stored in the base.
 * @param craft Craft type.
 * @return Number of craft.
 */
int Base::getCraftCount(LangString craft)
{
	int total = 0;
	for (vector<Craft*>::iterator i = _crafts.begin(); i != _crafts.end(); i++)
	{
		if ((*i)->getRules()->getType() == craft)
			total++;
	}
	return total;
}

/**
 * Returns the total amount of monthly costs
 * for maintaining the craft in the base.
 * @return Maintenance costs.
 */
int Base::getCraftMaintenance()
{
	int total = 0;
	for (vector<Craft*>::iterator i = _crafts.begin(); i != _crafts.end(); i++)
	{
		total += (*i)->getRules()->getMonthlyFee();
	}
	return total;
}

/**
 * Returns the total amount of monthly costs
 * for maintaining the personnel in the base.
 * @return Maintenance costs.
 */
int Base::getPersonnelMaintenance()
{
	int total = 0;
	total += _soldiers.size() * 20000;
	total += _engineers * 25000;
	total += _scientists * 30000;
	return total;
}

/**
 * Returns the total amount of monthly costs
 * for maintaining the facilities in the base.
 * @return Maintenance costs.
 */
int Base::getFacilityMaintenance()
{
	int total = 0;
	for (vector<BaseFacility*>::iterator i = _facilities.begin(); i != _facilities.end(); i++)
	{
		if ((*i)->getBuildTime() == 0)
			total += (*i)->getRules()->getMonthlyCost();
	}
	return total;
}

/**
 * Returns the total amount of all the maintenance
 * monthly costs in the base.
 * @return Maintenance costs.
 */
int Base::getMonthlyMaintenace()
{
	return getCraftMaintenance() + getPersonnelMaintenance() + getFacilityMaintenance();
}