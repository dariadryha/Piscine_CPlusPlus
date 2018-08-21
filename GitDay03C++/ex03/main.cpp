#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	ScavTrap op1("TONY");
	FragTrap op2("PONY");
	ClapTrap op3("ROOMIE");
	NinjaTrap op4("FREAK");

	op4.rangedAttack(op1.getName());
	op1.takeDamage(op4.getRangedDamage());
	srand(time(0));
	op4.beRepaired(rand() % 15);
	op4.meleeAttack(op3.getName());
	op3.takeDamage(op4.getMeleeDamage());
	op4.ninjaShoebox(op1);
	op4.ninjaShoebox(op2);
	op4.ninjaShoebox(op3);
	op4.ninjaShoebox(op4);
	return 0;
}