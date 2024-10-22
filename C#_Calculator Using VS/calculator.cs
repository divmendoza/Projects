namespace My_Calculator
{
    public partial class Screen : Form
    {
        private decimal firstNum = 0.0m;
        private decimal secondNum = 0.0m;
        private decimal result = 0.0m;
        private string sign = "+";
        public Screen()
        {
            InitializeComponent();
        }

        private void zeroBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "0";
            }
            else
            {
                TxtBox.Text += "0";
            }
        }

        private void clearBtn_Click(object sender, EventArgs e)
        {
            firstNum = 0.0m;
            secondNum = 0.0m;
            TxtBox.Text = "0";
        }

        private void dotBtn_Click(object sender, EventArgs e)
        {
            if (!TxtBox.Text.Contains("."))
            {
                TxtBox.Text += ".";
            }
        }

        private void oneBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "1";
            }
            else
            {
                TxtBox.Text += "1";
            }
        }

        private void twoBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "2";
            }
            else
            {
                TxtBox.Text += "2";
            }
        }

        private void threeBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "3";
            }
            else
            {
                TxtBox.Text += "3";
            }
        }

        private void fourBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "4";
            }
            else
            {
                TxtBox.Text += "4";
            }
        }

        private void fiveBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "5";
            }
            else
            {
                TxtBox.Text += "5";
            }
        }

        private void sixBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "6";
            }
            else
            {
                TxtBox.Text += "6";
            }
        }

        private void sevenBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "7";
            }
            else
            {
                TxtBox.Text += "7";
            }
        }

        private void eightBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "8";
            }
            else
            {
                TxtBox.Text += "8";
            }
        }

        private void nineBtn_Click(object sender, EventArgs e)
        {
            if (TxtBox.Text == "0")
            {
                TxtBox.Text = "9";
            }
            else
            {
                TxtBox.Text += "9";
            }
        }

        private void minusBtn_Click(object sender, EventArgs e)
        {
            firstNum = decimal.Parse(TxtBox.Text);
            TxtBox.Clear();
            sign = "-";
        }

        private void addBtn_Click(object sender, EventArgs e)
        {
            firstNum = decimal.Parse(TxtBox.Text);
            TxtBox.Clear();
            sign = "+";
        }

        private void multiplyBtn_Click(object sender, EventArgs e)
        {
            firstNum = decimal.Parse(TxtBox.Text);
            TxtBox.Clear();
            sign = "x";
        }
        private void divideBtn_Click(object sender, EventArgs e)
        {
            firstNum = decimal.Parse(TxtBox.Text);
            TxtBox.Clear();
            sign = "÷";
        }
        private void equalBtn_Click(object sender, EventArgs e)
        {
            switch (sign)
            {
                case "-":
                    secondNum = decimal.Parse(TxtBox.Text);
                    result = firstNum - secondNum;
                    TxtBox.Text = result.ToString();
                    break;
                case "+":
                    secondNum = decimal.Parse(TxtBox.Text);
                    result = firstNum + secondNum;
                    TxtBox.Text = result.ToString();
                    break;
                case "x":
                    secondNum = decimal.Parse(TxtBox.Text);
                    result = firstNum * secondNum;
                    TxtBox.Text = result.ToString();
                    break;
                case "÷":
                    secondNum = decimal.Parse(TxtBox.Text);
                    result = firstNum / secondNum;
                    TxtBox.Text = result.ToString();
                    break;

            }
        }
    }
}
