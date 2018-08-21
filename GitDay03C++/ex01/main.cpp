#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	// FragTrap a("Tor");
	// FragTrap b("SuperMan");
	// FragTrap d(a);

	// d.rangedAttack(b.getName());
	// b.takeDamage(d.getRangedDamage());

	// d.meleeAttack(b.getName());
	// b.takeDamage(d.getMeleeDamage());
	// FragTrap c = b;

	// d.vaulthunter_dot_exe(c.getName());

	// std::cout << d.getEnergyPoints() << std::endl;


	// c.takeDamage(d.getVaultHunterDamage());
	// d.meleeAttack(c.getName());
	// c.takeDamage(d.getMeleeDamage());
	// d.meleeAttack(c.getName());
	// c.takeDamage(d.getMeleeDamage());
	// d.vaulthunter_dot_exe(c.getName());
	// c.takeDamage(d.getVaultHunterDamage());

	// std::cout << c.getName() << std::endl;
	// std::cout << c.getHitPoints() << std::endl;
	// srand(time(0));
	// c.beRepaired(rand() % 20);
	// d.vaulthunter_dot_exe(c.getName());
	// c.takeDamage(d.getVaultHunterDamage());
	// d.vaulthunter_dot_exe(c.getName());
	// c.takeDamage(d.getVaultHunterDamage());
	// c.beRepaired(rand() % 20);
	ScavTrap a("Toto");
	ScavTrap b("Tutu");
	ScavTrap c;
	ScavTrap z(b);

	c = a;
	c.beRapaired(rand() % 10);
	c.rangedAttack(z.getName());
	z.takeDamage(c.getRangedDamage());

	c.meleeAttack(z.getName());
	z.takeDamage(c.getMeleeDamage());
	c.challangeNewcomer(z.getName());	
	z.challangeNewcomer(c.getName());
	z.beRapaired(rand() % 10);
	c.meleeAttack(z.getName());
	z.takeDamage(c.getMeleeDamage());
	c.meleeAttack(z.getName());
	z.takeDamage(c.getMeleeDamage());
	c.meleeAttack(z.getName());
	z.takeDamage(c.getMeleeDamage());
	c.meleeAttack(z.getName());
	z.takeDamage(c.getMeleeDamage());
	c.meleeAttack(z.getName());
	z.takeDamage(c.getMeleeDamage());
	c.meleeAttack(z.getName());
	z.takeDamage(c.getMeleeDamage());
	z.beRapaired(rand() % 10);
	return 0;
}