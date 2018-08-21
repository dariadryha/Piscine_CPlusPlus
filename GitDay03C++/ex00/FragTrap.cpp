#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	this->_brain_exp = 7;
	this->_lazer_tag = 10;
	this->_water_gun = 6;
	this->_toy_gun = 5;
	this->_vault_hunter = 0;
	this->_suicide = 50;
	std::cout << "FR4G-TP is born like " << this->_name << "!" << std::endl;
}

FragTrap::FragTrap()
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_name = "no name";
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	this->_brain_exp = 7;
	this->_lazer_tag = 10;
	this->_water_gun = 6;
	this->_toy_gun = 5;
	this->_vault_hunter = 0;
	this->_suicide = 50;
	std::cout << "FR4G-TP is born like " << this->_name << "!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->_name << " is died! :(((((((((((((((((" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	this->_hit_points = other._hit_points;
	this->_max_hit_points = other._max_hit_points;
	this->_energy_points = other._energy_points;
	this->_max_energy_points = other._max_energy_points;
	this->_level = other._level;
	this->_name = other._name;
	this->_melee_attack_damage = other._melee_attack_damage;
	this->_ranged_attack_damage = other._ranged_attack_damage;
	this->_armor_damage_reduction = other._armor_damage_reduction;
	this->_brain_exp = other._brain_exp;
	this->_lazer_tag = other._lazer_tag;
	this->_water_gun = other._water_gun;
	this->_toy_gun = other._toy_gun;
	this->_vault_hunter = other._vault_hunter;
	this->_suicide = other._suicide;
}

FragTrap& FragTrap::operator = (const FragTrap& other)
{
	this->_hit_points = other._hit_points;
	this->_max_hit_points = other._max_hit_points;
	this->_energy_points = other._energy_points;
	this->_max_energy_points = other._max_energy_points;
	this->_level = other._level;
	this->_name = other._name;
	this->_melee_attack_damage = other._melee_attack_damage;
	this->_ranged_attack_damage = other._ranged_attack_damage;
	this->_armor_damage_reduction = other._armor_damage_reduction;
	this->_brain_exp = other._brain_exp;
	this->_lazer_tag = other._lazer_tag;
	this->_water_gun = other._water_gun;
	this->_toy_gun = other._toy_gun;
	this->_vault_hunter = other._vault_hunter;
	this->_suicide = other._suicide;
	return (*this);
}

void	FragTrap::BrainExplosionAttack(std::string const & target)
{
	this->_vault_hunter = this->_brain_exp;
	std::cout << "It's BrainExplosionAttack from FR4G-TP " << this->_name << " to " << target << ", causing " << this->_brain_exp
	<< " points of damage !" << std::endl;
}

void	FragTrap::LazerTagAttack(std::string const & target)
{
	this->_vault_hunter = this->_lazer_tag;
	std::cout << "It's LazerTagAttack from FR4G-TP " << this->_name << " to " << target << ", causing " << this->_lazer_tag
	<< " points of damage !" << std::endl;
}

void	FragTrap::Suicide(std::string const & target)
{
	this->_vault_hunter = this->_suicide;
	std::cout << "It's Suicide from FR4G-TP " << this->_name << " to " << target << "!" << std::endl;
}

void	FragTrap::WaterGunAttack(std::string const & target)
{
	this->_vault_hunter = this->_water_gun;
	std::cout << "It's WaterGunAttack from FR4G-TP " << this->_name << " to " << target << ", causing " << this->_water_gun
	<< " points of damage !" << std::endl;
}

void	FragTrap::ToyGunAttack(std::string const & target)
{
	this->_vault_hunter = this->_toy_gun;
	std::cout << "It's ToyGunAttack from FR4G-TP " << this->_name << " to " << target << ", causing " << this->_toy_gun 
	<< " points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string choice[] = {"BrainExplosionAttack", "LazerTagAttack", "Suicide", "WaterGunAttack", "ToyGunAttack"};

	void (FragTrap::*attacks[])(std::string const&) = {&FragTrap::BrainExplosionAttack, &FragTrap::LazerTagAttack, &FragTrap::Suicide, &FragTrap::WaterGunAttack, &FragTrap::ToyGunAttack};

	if (this->_energy_points < 25)
	{
		std::cout << "Lozer, not enough energy!" << std::endl;
		return ;
	}
	this->_energy_points -= 25;
	(this->*attacks[rand() % 4])(target);
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " 
	<< target << " at range, causing " << this->_ranged_attack_damage 
	<< " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " 
	<< target << " at melee, causing " << this->_melee_attack_damage 
	<< " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (!this->_hit_points)
	{
		std::cout << "LOL! I'm already dead!" << std::endl;
		return ;
	}
	if (amount - this->_armor_damage_reduction < this->_hit_points)
	{
		this->_hit_points -= amount - this->_armor_damage_reduction;
		std::cout << "FR4G-TP " << this->_name << " is still alive!" << std::endl;
		std::cout << "Hit Points: " << this->_hit_points << std::endl;
		std::cout << "Energy Points: " << this->_energy_points << std::endl;
		std::cout << "Armor Damage Reduction: " << this->_armor_damage_reduction << std::endl;
		std::cout << "Inflicted Damage: " << amount - this->_armor_damage_reduction << std::endl;
	}
	else
	{
		this->_hit_points = 0;
		std::cout << "FR4G-TP " << this->_name << " is died!" << std::endl;
		std::cout << "Oh, noooooooooo! I'm killed! :,((" << std::endl;
		std::cout << "Hit Points: " << this->_hit_points << std::endl;
		std::cout << "Energy Points: " << this->_energy_points << std::endl;
		std::cout << "Armor Damage Reduction: " << this->_armor_damage_reduction << std::endl;
		std::cout << "Inflicted Damage: " << amount - this->_armor_damage_reduction << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points && this->_hit_points == this->_max_hit_points)
	{
		std::cout << "You have enough energy!" << std::endl;
		return ;
	}
	if (this->_energy_points < amount || !this->_energy_points)
		std::cout << "Sorry, there not enough energy to repair!:(" << std::cout;
	else if (this->_hit_points)
	{
		this->_energy_points -= amount;
		this->_hit_points = this->_hit_points + amount > this->_max_hit_points ? this->_max_hit_points : this->_hit_points + amount;
		std::cout << "Hit points of FR4G-TP " << this->_name << " increased by " << amount << std::endl;
		std::cout << "Hit Points: " << this->_hit_points << std::endl;
		std::cout << "Energy Points: " << this->_energy_points << std::endl;
		std::cout << "Armor Damage Reduction: " << this->_armor_damage_reduction << std::endl;
	}
}

std::string FragTrap::getName() { return (this->_name); }
unsigned int FragTrap::getRangedDamage() { return (this->_ranged_attack_damage); }
unsigned int FragTrap::getMeleeDamage() { return (this->_melee_attack_damage); }
unsigned int FragTrap::getVaultHunterDamage() { return this->_vault_hunter; }
unsigned int FragTrap::getHitPoints() { return this->_hit_points; }
unsigned int FragTrap::getEnergyPoints() { return this->_energy_points; }
