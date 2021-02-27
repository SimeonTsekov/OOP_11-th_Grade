#ifndef BASE_OBJECT_H
#define BASE_OBJECT_H

class Base{
	private:
		int id;
	protected:
		int pos[3];
		int rot[3];
		int scale[3];
		char model;
	public:
		Base();
		Base(int pos[3], int rot[3], int scale[3], char model);

		void set_pos(int x, int y, int z);
		void set_rot(int x, int y, int z);
		void set_scale(int x, int y, int z);
		void set_model(char model);

		int& get_pos();
		int& get_rot();
		int& get_scale();
		char get_model();
};

#endif
