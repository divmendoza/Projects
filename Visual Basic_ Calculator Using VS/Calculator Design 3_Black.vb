Public Class Form1
    Dim firstInput As Double = "0.0"
    Dim choiceInput As String
    Dim output As Double = "0.0"
    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        firstInput = TextBox1.Text
        TextBox1.Clear()
        choiceInput = "/"
    End Sub

    Private Sub Button14_Click(sender As Object, e As EventArgs) Handles Button14.Click
        firstInput = TextBox1.Text
        TextBox1.Clear()
        choiceInput = "-"
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "0"
        Else
            TextBox1.Text += "0"
        End If
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "00"
        Else
            TextBox1.Text += "00"
        End If
    End Sub

    Private Sub Button7_Click(sender As Object, e As EventArgs) Handles Button7.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "1"
        Else
            TextBox1.Text += "1"
        End If
    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "2"
        Else
            TextBox1.Text += "2"
        End If
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "3"
        Else
            TextBox1.Text += "3"
        End If
    End Sub

    Private Sub Button13_Click(sender As Object, e As EventArgs) Handles Button13.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "4"
        Else
            TextBox1.Text += "4"
        End If
    End Sub

    Private Sub Button12_Click(sender As Object, e As EventArgs) Handles Button12.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "5"
        Else
            TextBox1.Text += "5"
        End If
    End Sub

    Private Sub Button11_Click(sender As Object, e As EventArgs) Handles Button11.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "6"
        Else
            TextBox1.Text += "6"
        End If
    End Sub

    Private Sub Button10_Click(sender As Object, e As EventArgs) Handles Button10.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "7"
        Else
            TextBox1.Text += "7"
        End If
    End Sub

    Private Sub Button9_Click(sender As Object, e As EventArgs) Handles Button9.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "8"
        Else
            TextBox1.Text += "8"
        End If
    End Sub

    Private Sub Button8_Click(sender As Object, e As EventArgs) Handles Button8.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "9"
        Else
            TextBox1.Text += "9"
        End If
    End Sub

    Private Sub zero_Click(sender As Object, e As EventArgs) Handles zero.Click
        If (TextBox1.Text.Equals("0")) Then
            TextBox1.Text = "."
        Else
            TextBox1.Text += "."
        End If
    End Sub

    Private Sub Button16_Click(sender As Object, e As EventArgs) Handles Button16.Click
        firstInput = TextBox1.Text
        TextBox1.Clear()
        choiceInput = "+"
    End Sub

    Private Sub Button17_Click(sender As Object, e As EventArgs) Handles Button17.Click
        firstInput = TextBox1.Text
        TextBox1.Clear()
        choiceInput = "x"
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Select Case choiceInput
            Case "+"
                output = Double.Parse(firstInput + TextBox1.Text)
                output.ToString()
                TextBox1.Text = output
            Case "-"
                output = Double.Parse(firstInput - TextBox1.Text)
                output.ToString()
                TextBox1.Text = output
            Case "x"
                output = Double.Parse(firstInput * TextBox1.Text)
                output.ToString()
                TextBox1.Text = output
            Case "/"
                output = Double.Parse(firstInput / TextBox1.Text)
                output.ToString()
                TextBox1.Text = output
        End Select
    End Sub

    Private Sub Button15_Click(sender As Object, e As EventArgs) Handles Button15.Click
        TextBox1.Clear()
        TextBox1.Text = "0"
    End Sub
End Class
