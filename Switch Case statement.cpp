double areaSwitchCase(int ch, vector<double> a) {

  switch (ch) {

  case 1:

    return M_PI * a[0] * a[0];

    break;

//M_PI is build in method of pi

  case 2:

    return a[0] * a[1];

    break;

  default:

    return 0;

  }

}
