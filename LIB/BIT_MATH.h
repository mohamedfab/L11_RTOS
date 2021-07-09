#ifndef		BIT_MATH_H
#define		BIT_MATH_H

#define		SET_BIT(REG,BIT_NUM)		(REG |= (1<<BIT_NUM))

#define		CLEAR_BIT(REG,BIT_NUM)		(REG &= ~(1<<BIT_NUM))

#define		TOGGLE_BIT(REG,BIT_NUM)		(REG ^= (1<<BIT_NUM))

#define		CHECK_BIT(REG,BIT_NUM)		((REG>>BIT_NUM)&1)

#endif
