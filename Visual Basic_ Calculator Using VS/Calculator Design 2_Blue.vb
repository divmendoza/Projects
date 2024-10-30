Imports System.CodeDom
Imports System.Numerics
Imports System.Windows.Forms.VisualStyles.VisualStyleElement

Public Class Form1
    Dim num1 As Double = "0.0"
    Dim sign As String
    Dim res As Double = "0.0"
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "0"
        Else
            TxtBox.Text += "0"
        End If
    End Sub
    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "1"
        Else
            TxtBox.Text += "1"
        End If
    End Sub

    Private Sub Button7_Click(sender As Object, e As EventArgs) Handles Button7.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "2"
        Else
            TxtBox.Text += "2"
        End If
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "3"
        Else
            TxtBox.Text += "3"
        End If
    End Sub

    Private Sub Button12_Click(sender As Object, e As EventArgs) Handles Button12.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "4"
        Else
            TxtBox.Text += "4"
        End If
    End Sub

    Private Sub Button13_Click(sender As Object, e As EventArgs) Handles Button13.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "5"
        Else
            TxtBox.Text += "5"
        End If
    End Sub

    Private Sub Button11_Click(sender As Object, e As EventArgs) Handles Button11.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "6"
        Else
            TxtBox.Text += "6"
        End If
    End Sub

    Private Sub Button9_Click(sender As Object, e As EventArgs) Handles Button9.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "7"
        Else
            TxtBox.Text += "7"
        End If
    End Sub

    Private Sub Button10_Click(sender As Object, e As EventArgs) Handles Button10.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "8"
        Else
            TxtBox.Text += "8"
        End If
    End Sub

    Private Sub Button8_Click(sender As Object, e As EventArgs) Handles Button8.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "9"
        Else
            TxtBox.Text += "9"
        End If
    End Sub
    Private Sub Button18_Click(sender As Object, e As EventArgs) Handles Button18.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Clear()
            TxtBox.Text = "0"
        Else
            TxtBox.Clear()
            TxtBox.Text += "0"
        End If
    End Sub
    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "00"
        Else
            TxtBox.Text += "00"
        End If
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        If (TxtBox.Text.Equals("0")) Then
            TxtBox.Text = "."
        Else
            TxtBox.Text += "."
        End If
    End Sub

    Private Sub Button17_Click(sender As Object, e As EventArgs) Handles Button17.Click
        num1 = TxtBox.Text
        TxtBox.Clear()
        sign = "+"
    End Sub

    Private Sub Button15_Click(sender As Object, e As EventArgs) Handles Button15.Click
        num1 = TxtBox.Text
        TxtBox.Clear()
        sign = "-"
    End Sub

    Private Sub Button16_Click(sender As Object, e As EventArgs) Handles Button16.Click
        num1 = TxtBox.Text
        TxtBox.Clear()
        sign = "x"
    End Sub

    Private Sub Button19_Click(sender As Object, e As EventArgs) Handles Button19.Click
        num1 = TxtBox.Text
        TxtBox.Clear()
        sign = "/"
    End Sub

    Private Sub Button14_Click(sender As Object, e As EventArgs) Handles Button14.Click
        num1 = TxtBox.Text
        TxtBox.Clear()
        sign = "%"
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Select Case sign
            Case "+"
                res = Double.Parse(num1 + TxtBox.Text)
                res.ToString()
                TxtBox.Text = res
            Case "-"
                res = Double.Parse(num1 - TxtBox.Text)
                res.ToString()
                TxtBox.Text = res
            Case "x"
                res = Double.Parse(num1 * TxtBox.Text)
                res.ToString()
                TxtBox.Text = res
            Case "/"
                res = Double.Parse(num1 / TxtBox.Text)
                res.ToString()
                TxtBox.Text = res
            Case "%"
                Dim remainder As Double = num1 Mod Double.Parse(TxtBox.Text)
                remainder.ToString()
                TxtBox.Text = remainder
        End Select
    End Sub
End Class
