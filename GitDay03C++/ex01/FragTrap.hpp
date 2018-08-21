#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
	private:
		unsigned int _hit_points;
		unsigned int _max_hit_points;
		unsigned int _energy_points;
		unsigned int _max_energy_points;
		unsigned int _level;
		std::string _name;
		unsigned int _melee_attack_damage;
		unsigned int _ranged_attack_damage;
		unsigned int _armor_damage_reduction;
		unsigned int _brain_exp;
		unsigned int _lazer_tag;
		unsigned int _water_gun;
		unsigned int _toy_gun;
		unsigned int _vault_hunter;
		unsigned int _suicide;
		void	BrainExplosionAttack(std::string const & target);
		void	LazerTagAttack(std::string const & target);
		void	Suicide(std::string const & target);
		void	WaterGunAttack(std::string const & target);
		void	ToyGunAttack(std::string const & target);

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const & target);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		unsigned int getRangedDamage();
		unsigned int getMeleeDamage();
		unsigned int getVaultHunterDamage();
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();
};

#endif
