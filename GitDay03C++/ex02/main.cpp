#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("Tutu");
	FragTrap b("Tor");

	a.rangedAttack(b.getName());
	b.takeDamage(a.getRangedDamage());
	srand(time(0));
	b.beRepaired(rand() % 15);
	b.meleeAttack(a.getName());
	a.takeDamage(b.getMeleeDamage());
	a.challangeNewcomer(b.getName());
	b.vaulthunter_dot_exe(a.getName());
	a.takeDamage(b.getVaultHunterDamage());	
	return 0;
}