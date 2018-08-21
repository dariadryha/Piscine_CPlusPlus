#include "FragTrap.hpp"

int main(void)
{
	std::cout << std::endl;

	FragTrap a("Tor");
	FragTrap b("SuperMan");
	FragTrap d(a);

	d.beRepaired(rand() % 20);
	d.rangedAttack(b.getName());
	b.takeDamage(d.getRangedDamage());

	d.meleeAttack(b.getName());
	b.takeDamage(d.getMeleeDamage());
	FragTrap c = b;

	d.vaulthunter_dot_exe(c.getName());

	std::cout << d.getEnergyPoints() << std::endl;


	c.takeDamage(d.getVaultHunterDamage());
	d.meleeAttack(c.getName());
	c.beRepaired(rand() % 20);
	c.takeDamage(d.getMeleeDamage());
	c.beRepaired(rand() % 20);
	d.meleeAttack(c.getName());
	c.takeDamage(d.getMeleeDamage());
	d.vaulthunter_dot_exe(c.getName());
	c.takeDamage(d.getVaultHunterDamage());
	d.vaulthunter_dot_exe(c.getName());
	c.takeDamage(d.getVaultHunterDamage());
	d.vaulthunter_dot_exe(c.getName());
	c.takeDamage(d.getVaultHunterDamage());
	c.beRepaired(rand() % 20);
	return 0;
}